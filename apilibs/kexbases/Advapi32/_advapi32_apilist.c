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

#include "common.h"
#include "kexcoresdk.h"
#include "_advapi32_apilist.h"

BOOL init_advapi32()
{
	return TRUE;
}

static const apilib_named_api advapi32_named_apis[] = 
{
/*** AUTOGENERATED APILIST NAMED EXPORTS BEGIN ***/
	DECL_API("AccessCheck", AccessCheck_new),
	DECL_API("AddAccessAllowedAce", AddAccessAllowedAce_new),
	DECL_API("AdjustTokenPrivileges", AdjustTokenPrivileges_new),
	DECL_API("AllocateAndInitializeSid", AllocateAndInitializeSid_new),
	DECL_API("ChangeServiceConfig2A", ChangeServiceConfig2A_stub),
	DECL_API("ChangeServiceConfig2W", ChangeServiceConfig2W_stub),
	DECL_API("CheckTokenMembership", CheckTokenMembership_new),
	DECL_API("ConvertSecurityDescriptorToStringSecurityDescriptorA", ConvertSecurityDescriptorToStringSecurityDescriptorA_stub),
	DECL_API("ConvertSecurityDescriptorToStringSecurityDescriptorW", ConvertSecurityDescriptorToStringSecurityDescriptorW_stub),
	DECL_API("ConvertSidToStringSidA", ConvertSidToStringSidA_stub),
	DECL_API("ConvertSidToStringSidW", ConvertSidToStringSidW_stub),
	DECL_API("ConvertStringSecurityDescriptorToSecurityDescriptorA", ConvertStringSecurityDescriptorToSecurityDescriptorA_stub),
	DECL_API("ConvertStringSecurityDescriptorToSecurityDescriptorW", ConvertStringSecurityDescriptorToSecurityDescriptorW_stub),
	DECL_API("ConvertStringSidToSidA", ConvertStringSidToSidA_stub),
	DECL_API("ConvertStringSidToSidW", ConvertStringSidToSidW_stub),
	DECL_API("CopySid", CopySid_new),
	DECL_API("CreateProcessWithLogonW", CreateProcessWithLogonW_stub),
	DECL_API("CreateRestrictedToken", CreateRestrictedToken_new),
	DECL_API("CreateWellKnownSid", CreateWellKnownSid_new),
	DECL_API("CryptAcquireContextW", CryptAcquireContextW_stub),
	DECL_API("CryptEnumProviderTypesW", CryptEnumProviderTypesW_stub),
	DECL_API("CryptEnumProvidersW", CryptEnumProvidersW_stub),
	DECL_API("CryptGetDefaultProviderW", CryptGetDefaultProviderW_stub),
	DECL_API("CryptSetProviderExW", CryptSetProviderExW_stub),
	DECL_API("CryptSetProviderW", CryptSetProviderW_stub),
	DECL_API("CryptSignHashW", CryptSignHashW_stub),
	DECL_API("CryptVerifySignatureW", CryptVerifySignatureW_stub),
	DECL_API("DecryptFileA", DecryptFileA_stub),
	DECL_API("DecryptFileW", DecryptFileW_stub),
	DECL_API("DeleteAce", DeleteAce_new),
	DECL_API("DuplicateToken", DuplicateToken_new),
	DECL_API("DuplicateTokenEx", DuplicateTokenEx_new),
	DECL_API("EncryptFileA", EncryptFileA_stub),
	DECL_API("EncryptFileW", EncryptFileW_stub),
	DECL_API("EnumServicesStatusExA", EnumServicesStatusExA_stub),
	DECL_API("EnumServicesStatusExW", EnumServicesStatusExW_stub),
	DECL_API("EqualPrefixSid", EqualPrefixSid_new),
	DECL_API("EqualSid", EqualSid_new),
	DECL_API("FileEncryptionStatusA", FileEncryptionStatusA_stub),
	DECL_API("FileEncryptionStatusW", FileEncryptionStatusW_stub),
	DECL_API("FreeSid", FreeSid_new),
	DECL_API("GetAce", GetAce_new),
	DECL_API("GetFileSecurityA", GetFileSecurityA_new),
	DECL_API("GetFileSecurityW", GetFileSecurityW_new),
	DECL_API("GetLengthSid", GetLengthSid_new),
	DECL_API("GetNamedSecurityInfoA", GetNamedSecurityInfoA_new),
	DECL_API("GetNamedSecurityInfoW", GetNamedSecurityInfoW_new),
	DECL_API("GetSecurityDescriptorControl", GetSecurityDescriptorControl_new),
	DECL_API("GetSecurityDescriptorDacl", GetSecurityDescriptorDacl_new),
	DECL_API("GetSecurityDescriptorGroup", GetSecurityDescriptorGroup_new),
	DECL_API("GetSecurityDescriptorLength", GetSecurityDescriptorLength_new),
	DECL_API("GetSecurityDescriptorOwner", GetSecurityDescriptorOwner_new),
	DECL_API("GetSecurityDescriptorSacl", GetSecurityDescriptorSacl_new),
	DECL_API("GetSidIdentifierAuthority", GetSidIdentifierAuthority_new),
	DECL_API("GetSidLengthRequired", GetSidLengthRequired_new),
	DECL_API("GetSidSubAuthority", GetSidSubAuthority_new),
	DECL_API("GetSidSubAuthorityCount", GetSidSubAuthorityCount_new),
	DECL_API("GetTokenInformation", GetTokenInformation_new),
	DECL_API("ImpersonateSelf", ImpersonateSelf_new),
	DECL_API("InitializeAcl", InitializeAcl_new),
	DECL_API("InitializeSecurityDescriptor", InitializeSecurityDescriptor_new),
	DECL_API("InitializeSid", InitializeSid_new),
	DECL_API("InitiateSystemShutdownExA", InitiateSystemShutdownExA_stub),
	DECL_API("InitiateSystemShutdownExW", InitiateSystemShutdownExW_stub),
	DECL_API("IsValidSecurityDescriptor", IsValidSecurityDescriptor_new),
	DECL_API("IsValidSid", IsValidSid_new),
	DECL_API("IsWellKnownSid", IsWellKnownSid_stub),
	DECL_API("LogonUserA", LogonUserA_new),
	DECL_API("LookupAccountSidA", LookupAccountSidA_new),
	DECL_API("LookupAccountSidW", LookupAccountSidW_new),
	DECL_API("LookupPrivilegeValueA", LookupPrivilegeValueA_new),
	DECL_API("LookupPrivilegeValueW", LookupPrivilegeValueW_new),
	DECL_API("LsaClose", LsaClose_new),
	DECL_API("LsaNtStatusToWinError", LsaNtStatusToWinError_new),
	DECL_API("LsaOpenPolicy", LsaOpenPolicy_new),
	DECL_API("LsaRetrievePrivateData", LsaRetrievePrivateData_new),
	DECL_API("LsaStorePrivateData", LsaStorePrivateData_new),
	DECL_API("MakeSelfRelativeSD", MakeSelfRelativeSD_new),
	DECL_API("NotifyBootConfigStatus", NotifyBootConfigStatus_stub),
	DECL_API("OpenProcessToken", OpenProcessToken_new),
	DECL_API("OpenSCManagerA", OpenSCManagerA_stub),
	DECL_API("OpenSCManagerW", OpenSCManagerW_stub),
	DECL_API("OpenThreadToken", OpenThreadToken_new),
	DECL_API("PrivilegeCheck", PrivilegeCheck_new),
	DECL_API("QueryServiceStatusEx", QueryServiceStatusEx_stub),
	DECL_API("QueryWindows31FilesMigration", QueryWindows31FilesMigration_stub),
	DECL_API("RegCreateKeyExW", RegCreateKeyExW_new),
	DECL_API("RegCreateKeyW", RegCreateKeyW_new),
	DECL_API("RegDeleteKeyW", RegDeleteKeyW_new),
	DECL_API("RegDisablePredefinedCache", RegDisablePredefinedCache_new),
	DECL_API("RegEnumValueW", RegEnumValueW_new),
	DECL_API("RegGetKeySecurity", RegGetKeySecurity_new),
	DECL_API("RegOpenCurrentUser", RegOpenCurrentUser_new),
	DECL_API("RegOpenKeyExW", RegOpenKeyExW_new),
	DECL_API("RegOpenKeyW", RegOpenKeyW_new),
	DECL_API("RegOpenUserClassesRoot", RegOpenUserClassesRoot_new),
	DECL_API("RegOverridePredefKey", RegOverridePredefKey_stub),
	DECL_API("RegQueryValueExW", RegQueryValueExW_new),
	DECL_API("RegSetValueExA", RegSetValueExA_fix),
	DECL_API("RegSetValueExW", RegSetValueExW_new),
	DECL_API("RevertToSelf", RevertToSelf_new),
	DECL_API("SetFileSecurityA", SetFileSecurityA_new),
	DECL_API("SetFileSecurityW", SetFileSecurityW_new),
	DECL_API("SetKernelObjectSecurity", SetKernelObjectSecurity_new),
	DECL_API("SetSecurityDescriptorDacl", SetSecurityDescriptorDacl_new),
	DECL_API("SetSecurityDescriptorGroup", SetSecurityDescriptorGroup_new),
	DECL_API("SetSecurityDescriptorOwner", SetSecurityDescriptorOwner_new),
	DECL_API("SetSecurityDescriptorSacl", SetSecurityDescriptorSacl_new),
	DECL_API("SetThreadToken", SetThreadToken_new),
	DECL_API("SynchronizeWindows31FilesAndWindowsNTRegistry", SynchronizeWindows31FilesAndWindowsNTRegistry_stub),
	DECL_API("SystemFunction036", SystemFunction036_new),
	DECL_API("TraceMessage", TraceMessage_new),
/*** AUTOGENERATED APILIST NAMED EXPORTS END ***/
};

#if 0
static const apilib_unnamed_api advapi32_ordinal_apis[] =
{
/*** AUTOGENERATED APILIST ORDINAL EXPORTS BEGIN ***/
/*** AUTOGENERATED APILIST ORDINAL EXPORTS END ***/
};
#endif

const apilib_api_table apitable_advapi32 = DECL_TAB("ADVAPI32.DLL", advapi32_named_apis, 0 /*advapi32_ordinal_apis*/);
