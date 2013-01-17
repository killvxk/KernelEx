/*
 *  KernelEx
 *  Copyright (C) 2008, Xeno86
 *
 *  This file is part of KernelEx source code.
 *
 *  KernelEx is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation; version 2 of the License.
 *
 *  KernelEx is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include <stdio.h>
#include "common.h"
#include "kernel32/_kernel32_apilist.h"
#include "gdi32/_gdi32_apilist.h"
#include "user32/_user32_apilist.h"
#include "advapi32/_advapi32_apilist.h"
#include "comdlg32/_comdlg32_apilist.h"
#include "shell32/_shell32_apilist.h"
#include "version/_version_apilist.h"
#include "comctl32/_comctl32_apilist.h"
//#include "/__apilist.h"

static LONG inited = 0;
static apilib_api_table api_table[9];

static void fill_apitable()
{
	api_table[0] = apitable_kernel32;
	api_table[1] = apitable_gdi32;
	api_table[2] = apitable_user32;
	api_table[3] = apitable_advapi32;
	api_table[4] = apitable_comdlg32;
	api_table[5] = apitable_shell32;
	api_table[6] = apitable_version;
	api_table[7] = apitable_comctl32;
	//last entry is null terminator
}

extern "C"
__declspec(dllexport)
const apilib_api_table* get_api_table()
{
	fill_apitable();
	return api_table;
}

BOOL init_once()
{
	return common_init() && init_kernel32() && init_gdi32() && init_user32() && init_advapi32() && init_comdlg32() && init_shell32() && init_version() && init_comctl32();
}

/* Initialization phase */
BOOL ppi_init(PPDB98 Process)
{
	PPROCESSINFO ppi;

	if(IsBadReadPtr(Process, sizeof(PDB98)))
		Process = get_pdb();

	Process->Win32Process = (PPROCESSINFO)kexAllocObject(sizeof(PROCESSINFO));

	if(Process->Win32Process == NULL)
		return FALSE;

	ppi = Process->Win32Process;

	ppi->hdeskStartup = NULL;
	ppi->rpdeskStartup = NULL;

	return TRUE;
}

BOOL pti_init(PTDB98 Thread)
{
	if(IsBadReadPtr(Thread, sizeof(TDB98)))
		Thread = get_tdb();

	Thread->Win32Thread = (PTHREADINFO)kexAllocObject(sizeof(THREADINFO));

	if(Thread->Win32Thread == NULL)
		return FALSE;

	return TRUE;
}

BOOL thread_init(PTDB98 Thread)
{
	return thread_user32_init(Thread);
}

BOOL process_init(PPDB98 Process)
{
	return process_user32_init(Process);
}

/* Uninitialization phase */
VOID pti_uninit(PTDB98 Thread)
{
	if(IsBadReadPtr(Thread, sizeof(TDB98)))
		Thread = get_tdb();

	kexFreeObject(Thread->Win32Thread);
}

VOID ppi_uninit(PPDB98 Process)
{
	if(IsBadReadPtr(Process, sizeof(PDB98)))
		Process = get_pdb();

	kexFreeObject(Process->Win32Process);
}

VOID thread_uninit(PTDB98 Thread)
{
	if(IsBadReadPtr(Thread, sizeof(TDB98)))
		Thread = get_tdb();

	thread_user_uninit(Thread);
	return;
}

VOID process_uninit(PPDB98 Process)
{
	if(IsBadReadPtr(Process, sizeof(PDB98)))
		Process = get_pdb();

	process_user_uninit(Process);
	return;
}

BOOL APIENTRY DllMain(HINSTANCE instance, DWORD reason, BOOL load_static)
{
	PPDB98 Process = get_pdb();
	PTDB98 Thread = get_tdb();

	switch (reason) 
	{
	case DLL_PROCESS_ATTACH:

		if(fShutdown)
		{
			char lpAppName[80];
			char buffer[80];
			BOOL result;

			result = kexGetProcessName(GetCurrentProcessId(), lpAppName);

			if(!result)
				sprintf(buffer, "<unknown> - DLL Initialization Failed");
			else
				sprintf(buffer, "%s - DLL Initialization Failed", lpAppName);

			MessageBox(NULL, "The application failed to initialize because the window station is shutting down.", buffer, MB_ICONERROR | MB_SYSTEMMODAL);
			ExitProcess(0);
			return FALSE;
		}

		if(!ppi_init(Process) || !pti_init(Thread))
			return FALSE;

		if(!process_init(Process) || !thread_init(Thread))
			return FALSE;

//		kexDebugPrint("KernelEx Base Shared library reporting in action!\n");
//		DisableThreadLibraryCalls(instance);
		if (InterlockedExchange(&inited, 1) == 0)
		{
			if (!init_once())
				return FALSE;
		}
		break;
	case DLL_THREAD_ATTACH:
		return pti_init(Thread) && thread_init(Thread);
		break;
	case DLL_THREAD_DETACH:
		thread_uninit(Thread);
		pti_uninit(Thread);
		break;
	case DLL_PROCESS_DETACH:
		thread_uninit(Thread);
		process_uninit(Process);
		pti_uninit(Thread);
		ppi_uninit(Process);
//		kexDebugPrint("KernelEx Base Shared library signing off!\n");
		break;
	}
	return TRUE;
}
