/*
 *  KernelEx
 *  Copyright (C) 2010, Tihiy
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

#include "common.h"
#include "_cryptui_apilist.h"

BOOL init_cryptui()
{
	return TRUE;
}

static const apilib_named_api cryptui_named_apis[] = 
{
/*** AUTOGENERATED APILIST NAMED EXPORTS BEGIN ***/
	DECL_API("CryptUIDlgViewContext", CryptUIDlgViewContext_new),
/*** AUTOGENERATED APILIST NAMED EXPORTS END ***/
};

#if 0
static const apilib_unnamed_api cryptui_ordinal_apis[] =
{
/*** AUTOGENERATED APILIST ORDINAL EXPORTS BEGIN ***/
/*** AUTOGENERATED APILIST ORDINAL EXPORTS END ***/
};
#endif

const apilib_api_table apitable_cryptui = DECL_TAB("CRYPTUI.DLL", cryptui_named_apis, 0 /*cryptui_ordinal_apis*/);
