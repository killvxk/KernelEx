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

#ifndef _KERNEL32_APILIST_H
#define _KERNEL32_APILIST_H

#include "kexcoresdk.h"
#include <tlhelp32.h>

BOOL init_kernel32();
extern const apilib_api_table apitable_kernel32;

/*** AUTOGENERATED APILIST DECLARATIONS BEGIN ***/
HWND WINAPI GetConsoleWindow_new();
BOOL WINAPI GetModuleHandleExA_new(DWORD dwFlags, LPCSTR lpModuleName, HMODULE* phModule);
BOOL WINAPI GetModuleHandleExW_new(DWORD dwFlags, LPCWSTR lpModuleNameW, HMODULE* phModule);
BOOL WINAPI IsProcessorFeaturePresent_new(DWORD feature);
void WINAPI KEXVersion(char* out);
void WINAPI RtlCaptureContext_new(void* cr);
STUB CreateHardLinkA_stub;
STUB CreateHardLinkW_stub;
STUB GetComputerNameExA_stub;
STUB GetComputerNameExW_stub;
STUB GetProcessIoCounters_stub;
STUB HeapSetInformation_stub;
STUB IsValidLanguageGroup_stub;
STUB ReplaceFileA_stub;
STUB ReplaceFileW_stub;
STUB RtlCaptureStackBackTrace_stub;
void WINAPI DeleteCriticalSection_fix(PCRITICAL_SECTION lpCriticalSection);
void WINAPI EnterCriticalSection_fix(LPCRITICAL_SECTION lpCriticalSection);
BOOL WINAPI InitializeCriticalSectionAndSpinCount_new(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount);
BOOL WINAPI TryEnterCriticalSection_new(CRITICAL_SECTION* cs);
BOOL WINAPI SetDllDirectoryA_new(LPCSTR lpPathName);
BOOL WINAPI SetDllDirectoryW_new(LPCWSTR lpPathNameW);
BOOL WINAPI CopyFileExA_new(LPCSTR lpExistingFileNameA, LPCSTR lpNewFileNameA, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags);
HANDLE WINAPI CreateFileA_fix(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDistribution, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
HANDLE WINAPI FindFirstFileExA_new(LPCSTR lpFileNameA, FINDEX_INFO_LEVELS fInfoLevelId, LPWIN32_FIND_DATAA lpFindFileDataA, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
HANDLE WINAPI FindFirstFileExW_new(LPWSTR lpFileNameW, FINDEX_INFO_LEVELS fInfoLevelId, LPWIN32_FIND_DATAW lpFindFileDataW, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
BOOL WINAPI GetDiskFreeSpaceA_fix(LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters);
BOOL WINAPI GetDiskFreeSpaceExA_fix(LPCSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailable, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
BOOL WINAPI GetFileSizeEx_new(HANDLE hFile, PLARGE_INTEGER lpFileSize);
UINT WINAPI GetTempFileNameA_fix(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPTSTR lpTempFileName);
BOOL WINAPI GetVolumePathNameA_new(LPCSTR filename, LPSTR volumepathname, DWORD buflen);
BOOL WINAPI GetVolumePathNameW_new(LPCWSTR filenameW, LPWSTR volumepathnameW, DWORD buflen);
BOOL WINAPI LockFileEx_new(HANDLE hFile, DWORD dwFlags, DWORD dwReserved, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh, LPOVERLAPPED lpOverlapped);
LPVOID WINAPI MapViewOfFileEx_new(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress);
LPVOID WINAPI MapViewOfFile_new(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
BOOL WINAPI MoveFileExA_new(LPCSTR lpExistingFileNameA, LPCSTR lpNewFileNameA, DWORD dwFlags);
BOOL WINAPI MoveFileWithProgressA_new(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags);
BOOL WINAPI ReadFile_fix(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
BOOL WINAPI SetFilePointerEx_new(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod);
BOOL WINAPI UnlockFileEx_new(HANDLE hFile, DWORD dwReserved, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh, LPOVERLAPPED lpOverlapped);
BOOL WINAPI WriteFile_fix(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
PSLIST_ENTRY WINAPI InterlockedFlushSList_new(PSLIST_HEADER ListHead);
PSLIST_ENTRY WINAPI InterlockedPopEntrySList_new(PSLIST_HEADER ListHead);
void WINAPI InitializeSListHead_new(PSLIST_HEADER ListHead);
PSLIST_ENTRY WINAPI InterlockedPushEntrySList_new(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry);
USHORT WINAPI QueryDepthSList_new(IN PSLIST_HEADER ListHead);
HANDLE WINAPI CreateJobObjectA_new(LPSECURITY_ATTRIBUTES sa, LPCSTR name);
HANDLE WINAPI CreateJobObjectW_new(LPSECURITY_ATTRIBUTES sa, LPCWSTR name);
BOOL WINAPI TerminateJobObject_new(HANDLE job, UINT exit_code);
HANDLE WINAPI OpenJobObjectA_new(DWORD access, BOOL inherit, LPCSTR name);
HANDLE WINAPI OpenJobObjectW_new(DWORD access, BOOL inherit, LPCWSTR name);
BOOL WINAPI QueryInformationJobObject_new(HANDLE job, PVOID classs, LPVOID info, DWORD len, DWORD *ret_len);
BOOL WINAPI SetInformationJobObject_new(HANDLE job, PVOID classs, LPVOID info, DWORD len);
BOOL WINAPI AssignProcessToJobObject_new(HANDLE job, HANDLE process);
BOOL WINAPI IsProcessInJob_new(HANDLE process, HANDLE job, PBOOL result);
INT WINAPI CompareStringW_new(LCID lcid, DWORD style, LPCWSTR str1, INT len1, LPCWSTR str2, INT len2);
BOOL WINAPI GetStringTypeW_new(DWORD type, LPCWSTR src, INT count, LPWORD chartype);
BOOL WINAPI GetStringTypeExW_new(LCID locale, DWORD type, LPCWSTR src, INT count, LPWORD chartype);
INT WINAPI LCMapStringW_new(LCID lcid, DWORD flags, LPCWSTR src, INT srclen, LPWSTR dst, INT dstlen);
INT WINAPI FoldStringW_new(DWORD dwFlags, LPCWSTR src, INT srclen, LPWSTR dst, INT dstlen);
INT WINAPI FoldStringA_new(DWORD dwFlags, LPCSTR src, INT srclen, LPSTR dst, INT dstlen);
int WINAPI lstrcmpW_new(LPCWSTR str1, LPCWSTR str2);
int WINAPI lstrcmpiW_new(LPCWSTR str1, LPCWSTR str2);
LPVOID WINAPI GlobalLock_fix(HGLOBAL hMem);
BOOL WINAPI GlobalMemoryStatusEx_new(LPMEMORYSTATUSEX lpmemex);
BOOL WINAPI GlobalUnlock_fix(HGLOBAL hMem);
BOOL WINAPI HeapLock_new(HANDLE hHeap);
BOOL WINAPI HeapQueryInformation_new(HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength, PSIZE_T ReturnLength);
BOOL WINAPI HeapSetInformation_new(HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength);
BOOL WINAPI HeapUnlock_new(HANDLE hHeap);
BOOL WINAPI HeapValidate_new(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
BOOL WINAPI HeapWalk_new(HANDLE hHeap, LPPROCESS_HEAP_ENTRY lpEntry);
LPVOID WINAPI VirtualAllocEx_new(HANDLE hProcess, LPVOID lpAddress, DWORD dwSize, DWORD flAllocationType, DWORD flProtect);
BOOL WINAPI VirtualFreeEx_new(HANDLE hProcess, LPVOID lpAddress, DWORD dwSize, DWORD dwFreeType);
PVOID WINAPI XorPointer(PVOID ptr);
HANDLE WINAPI CreateIoCompletionPort_new(HANDLE FileHandle, HANDLE ExistingCompletionPort, ULONG_PTR CompletionKey, DWORD NumberOfConcurrentThreads);
BOOL WINAPI GetQueuedCompletionStatus_new(HANDLE CompletionPort, LPDWORD lpNumberOfBytes, PULONG_PTR lpCompletionKey, LPOVERLAPPED *lpOverlapped, DWORD dwMilliseconds);
BOOL WINAPI PostQueuedCompletionStatus_new(HANDLE CompletionPort, DWORD dwNumberOfBytesTransferred, ULONG_PTR dwCompletionKey, LPOVERLAPPED lpOverlapped);
BOOL WINAPI CreateProcessA_fix(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
BOOL WINAPI CreateProcessAsUserA_new(HANDLE hToken, LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
VOID WINAPI ExitProcess_fix(UINT uExitCode);
DWORD WINAPI GetProcessId_new(HANDLE hProcess);
BOOL WINAPI IsWow64Process_new(HANDLE hProcess, PBOOL Wow64Process);
BOOL WINAPI ProcessIdToSessionId_new(DWORD dwProcessId, DWORD *pSessionId);
DWORD WINAPI WTSGetActiveConsoleSessionId_new(void);
LPVOID WINAPI CreateFiberEx_new(SIZE_T dwStackCommitSize, SIZE_T dwStackReserveSize, DWORD dwFlags, LPFIBER_START_ROUTINE lpStartAddress, LPVOID lpParameter);
HANDLE WINAPI CreateRemoteThread_new(HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
HANDLE WINAPI CreateThread_fix(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
HANDLE WINAPI OpenThread_new(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwThreadId);
BOOL WINAPI SystemTimeToTzSpecificLocalTime_new(const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpUniversalTime, LPSYSTEMTIME lpLocalTime);
BOOL WINAPI TzSpecificLocalTimeToSystemTime_new(const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpLocalTime, LPSYSTEMTIME lpUniversalTime);
LANGID WINAPI GetUserDefaultUILanguage_new(void);
LANGID WINAPI GetSystemDefaultUILanguage_new(void);
BOOL WINAPI EnumUILanguagesA_new(UILANGUAGE_ENUMPROCA pUILangEnumProc, DWORD dwFlags, LONG_PTR lParam);
BOOL WINAPI EnumUILanguagesW_new(UILANGUAGE_ENUMPROCW pUILangEnumProc, DWORD dwFlags, LONG_PTR lParam);
LANGID WINAPI SetThreadUILanguage_new(LANGID LangId);
ATOM WINAPI AddAtomW_new(LPCWSTR strW);
BOOL WINAPI CopyFileExW_new(LPCWSTR lpExistingFileNameW, LPCWSTR lpNewFileNameW, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags);
BOOL WINAPI CopyFileW_new(LPCWSTR lpExistingFileNameW, LPCWSTR lpNewFileNameW, BOOL bFailIfExists);
BOOL WINAPI CreateDirectoryExW_new(LPCWSTR templatedirW, LPCWSTR newdirW, LPSECURITY_ATTRIBUTES secattr);
BOOL WINAPI CreateDirectoryW_new(LPCWSTR PathW, LPSECURITY_ATTRIBUTES SecAttr);
HANDLE WINAPI CreateFileW_new(LPCWSTR strW, DWORD access, DWORD sharemode, LPSECURITY_ATTRIBUTES secattr, DWORD creatdistr, DWORD flags, HANDLE temp);
BOOL WINAPI CreateProcessW_new(LPCWSTR lpApplicationNameW, LPWSTR lpCommandLineW, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectoryW, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
BOOL WINAPI DefineDosDeviceW_new(DWORD dwFlags, LPCWSTR lpDeviceNameW, LPCWSTR lpTargetPathW);
BOOL WINAPI DeleteFileW_new(LPCWSTR lpFileNameW);
ATOM WINAPI FindAtomW_new(LPCWSTR strW);
HANDLE WINAPI FindFirstChangeNotificationW_new(LPCWSTR pathW, BOOL watchsubtree, DWORD filter);
HANDLE WINAPI FindFirstFileW_new(LPCWSTR strW, LPWIN32_FIND_DATAW dataW);
BOOL WINAPI FindNextFileW_new(HANDLE handle, LPWIN32_FIND_DATAW dataW);
HRSRC WINAPI FindResourceExW_new(HMODULE hModule, LPCWSTR typeW, LPCWSTR nameW, WORD lang);
HRSRC WINAPI FindResourceW_new(HINSTANCE hModule, LPCWSTR name, LPCWSTR type);
BOOL WINAPI FreeEnvironmentStringsW_new(void* env);
UINT WINAPI GetAtomNameW_new(ATOM atom, LPWSTR bufferW, int size);
DWORD WINAPI GetCurrentDirectoryW_new(DWORD nBufferLength, LPWSTR lpBufferW);
BOOL WINAPI GetDefaultCommConfigW_new(LPCWSTR lpszNameW, LPCOMMCONFIG lpCC, LPDWORD lpdwSize);
BOOL WINAPI GetDiskFreeSpaceExW_new(LPCWSTR lpDirectoryNameW, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
BOOL WINAPI GetDiskFreeSpaceW_new(LPCWSTR lpRootPathNameW, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters);
void* WINAPI GetEnvironmentStringsW_new(void);
BOOL WINAPI GetFileAttributesExW_new(LPCWSTR lpFileNameW, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation);
DWORD WINAPI GetFileAttributesW_new(LPCWSTR lpFileNameW);
DWORD WINAPI GetFullPathNameW_new(LPCWSTR lpFileNameW, DWORD nBufferLength, LPWSTR lpBufferW, LPWSTR *lpFilePartW);
int WINAPI GetLocaleInfoW_new(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData);
DWORD WINAPI GetLongPathNameW_new(LPCWSTR lpszShortPathW, LPWSTR lpszLongPathW, DWORD cchBuffer);
DWORD WINAPI GetModuleFileNameW_new(HMODULE hModule, LPWSTR lpFilenameW, DWORD nSize);
HMODULE WINAPI GetModuleHandleW_new(LPCWSTR lpModuleNameW);
DWORD WINAPI GetShortPathNameW_new(LPCWSTR lpszLongPathW, LPWSTR lpszShortPathW, DWORD cchBuffer);
VOID WINAPI GetStartupInfoW_new(LPSTARTUPINFOW lpStartupInfo);
UINT WINAPI GetSystemDirectoryW_new(LPWSTR lpBufferW, UINT uSize);
UINT WINAPI GetTempFileNameW_new(LPCWSTR lpPathNameW, LPCWSTR lpPrefixStringW, UINT uUnique, LPWSTR lpTempFileNameW);
DWORD WINAPI GetTempPathW_new(DWORD nBufferLength, LPWSTR lpBufferW);
UINT WINAPI GetWindowsDirectoryW_new(LPWSTR lpBufferW, UINT uSize);
ATOM WINAPI GlobalAddAtomW_new(LPCWSTR strW);
ATOM WINAPI GlobalFindAtomW_new(LPCWSTR strW);
UINT WINAPI GlobalGetAtomNameW_new(ATOM atom, LPWSTR bufferW, int size);
HINSTANCE WINAPI LoadLibraryW_new(LPCWSTR lpLibFileNameW);
HINSTANCE WINAPI LoadLibraryExW_new(LPCWSTR lpLibFileNameW, HANDLE hFile, DWORD dwFlags);
BOOL WINAPI Module32FirstW_new(HANDLE hSnapshot, LPMODULEENTRY32W lpmeW);
BOOL WINAPI Module32NextW_new(HANDLE hSnapshot, LPMODULEENTRY32W lpmeW);
BOOL WINAPI MoveFileExW_new(LPCWSTR existingfileW, LPCWSTR newfileW, DWORD flags);
BOOL WINAPI MoveFileW_new(LPCWSTR existingfileW, LPCWSTR newfileW);
BOOL WINAPI MoveFileWithProgressW_new(LPCWSTR existingfileW, LPCWSTR newfileW, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags);
void WINAPI OutputDebugStringW_new(LPCWSTR strW);
BOOL WINAPI Process32FirstW_new(HANDLE hSnapshot, LPPROCESSENTRY32W lppeW);
BOOL WINAPI Process32NextW_new(HANDLE hSnapshot, LPPROCESSENTRY32W lppeW);
BOOL WINAPI RemoveDirectoryW_new(LPCWSTR lpPathNameW);
DWORD WINAPI SearchPathW_new(LPCWSTR lpPathW, LPCWSTR lpFileNameW, LPCWSTR lpExtensionW, DWORD nBufferLength, LPWSTR lpBufferW, LPWSTR *lpFilePartW);
BOOL WINAPI SetConsoleTitleW_new(LPCWSTR strW);
BOOL WINAPI SetCurrentDirectoryW_new(LPCWSTR lpPathNameW);
BOOL WINAPI SetFileAttributesW_new(LPCWSTR lpFileNameW, DWORD dwFileAttributes);
DWORD WINAPI VerLanguageNameW_new(DWORD wLang, LPWSTR szLangW, DWORD nSize);
LPWSTR WINAPI lstrcpynW_new(LPWSTR dst, LPCWSTR src, INT n);
BOOL WINAPI ReadConsoleInputW_new(HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, DWORD nLength, LPDWORD lpNumberOfEventsRead);
ULONGLONG WINAPI VerSetConditionMask_new(ULONGLONG dwlConditionMask, DWORD dwTypeBitMask, BYTE dwConditionMask);
DWORD WINAPI GetVersion_WIN95(void);
DWORD WINAPI GetVersion_WIN98(void);
DWORD WINAPI GetVersion_WINME(void);
DWORD WINAPI GetVersion_NT40(void);
DWORD WINAPI GetVersion_NT2K(void);
DWORD WINAPI GetVersion_WINXP(void);
DWORD WINAPI GetVersion_WIN2K3(void);
DWORD WINAPI GetVersion_VISTA(void);
DWORD WINAPI GetVersion_WIN2K8(void);
BOOL WINAPI GetVersionExA_ORIG(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_ORIG(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WIN95(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WIN95(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WIN98(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WIN98(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WINME(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WINME(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_NT40(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_NT40(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_NT2K(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_NT2K(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WINXP(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WINXP(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WIN2K3(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WIN2K3(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_VISTA(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_VISTA(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI GetVersionExA_WIN2K8(LPOSVERSIONINFOA lpVersionInfo);
BOOL WINAPI GetVersionExW_WIN2K8(LPOSVERSIONINFOW lpVersionInfo);
BOOL WINAPI VerifyVersionInfoA_NT2K(LPOSVERSIONINFOEXA lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoW_NT2K(LPOSVERSIONINFOEXW lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoA_WINXP(LPOSVERSIONINFOEXA lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoW_WINXP(LPOSVERSIONINFOEXW lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoA_WIN2K3(LPOSVERSIONINFOEXA lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoW_WIN2K3(LPOSVERSIONINFOEXW lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoA_VISTA(LPOSVERSIONINFOEXA lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoW_VISTA(LPOSVERSIONINFOEXW lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoA_WIN2K8(LPOSVERSIONINFOEXA lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
BOOL WINAPI VerifyVersionInfoW_WIN2K8(LPOSVERSIONINFOEXW lpVersionInfo, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
int WINAPI WideCharToMultiByte_new(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cchMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
int WINAPI MultiByteToWideChar_new(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cchMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
/*** AUTOGENERATED APILIST DECLARATIONS END ***/

#endif
