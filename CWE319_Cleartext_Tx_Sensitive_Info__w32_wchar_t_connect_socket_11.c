/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a
 *    a a a a a a a a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#pragma comment(lib, "advapi32.lib")

#define HASH_INPUT "ABCDEFG123456" /* a a a */

#ifndef OMITWKO

void eJikBapmACCdYViNoDTm_WKO()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    if(globalReturnsTrue())
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            wchar_t *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = wcslen(password);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                /* a a a a a a a a a a a a a
                 * a a a a a a a a a a a a a */
                /* a a a a a a a a */
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                password[passwordLen + recvResult / sizeof(wchar_t)] = L'\0';
                /* a a */
                replace = wcschr(password, L'\r');
                if (replace)
                {
                    *replace = L'\0';
                }
                replace = wcschr(password, L'\n');
                if (replace)
                {
                    *replace = L'\0';
                }
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                closesocket(connectSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    if(globalReturnsTrue())
    {
        {
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            /* a a a a a a a a a a a */
            /* a a a a a a a a a a a a a a */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
        }
    }
}

#endif /* a */

#ifndef OMITzqo

/* a a a a a a a a a a a a a */
static void zqoB2G1()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    if(globalReturnsTrue())
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            wchar_t *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = wcslen(password);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                /* a a a a a a a a a a a a a
                 * a a a a a a a a a a a a a */
                /* a a a a a a a a */
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                password[passwordLen + recvResult / sizeof(wchar_t)] = L'\0';
                /* a a */
                replace = wcschr(password, L'\r');
                if (replace)
                {
                    *replace = L'\0';
                }
                replace = wcschr(password, L'\n');
                if (replace)
                {
                    *replace = L'\0';
                }
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                closesocket(connectSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            char hashData[100] = HASH_INPUT;
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            do
            {
                BYTE payload[(100 - 1) * sizeof(wchar_t)]; /* a a a a a a a a */
                DWORD payloadBytes;
                /* a a a a a a a */
                payloadBytes = decodeHexWChars(payload, sizeof(payload), password);
                /* a a a a a a a a a a a a a
                 * a a a a a a */
                SecureZeroMemory(password, 100 * sizeof(wchar_t));
                /* a a a */
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
                {
                    break;
                }
                /* a a a */
                if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
                {
                    break;
                }
                /* a a a a */
                if(!CryptHashData(hHash, (BYTE*)hashData, strlen(hashData), 0))
                {
                    break;
                }
                /* a a a a a a a */
                if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
                {
                    break;
                }
                /* a a a a */
                if(!CryptDecrypt(hKey, 0, 1, 0, payload, &payloadBytes))
                {
                    break;
                }
                /* a a a a a a */
                memcpy(password, payload, payloadBytes);
                password[payloadBytes / sizeof(wchar_t)] = L'\0';
            }
            while (0);
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            /* a a a a a a a a a a a */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void zqoB2G2()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    if(globalReturnsTrue())
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            wchar_t *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = wcslen(password);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                /* a a a a a a a a a a a a a
                 * a a a a a a a a a a a a a */
                /* a a a a a a a a */
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(wchar_t), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                password[passwordLen + recvResult / sizeof(wchar_t)] = L'\0';
                /* a a */
                replace = wcschr(password, L'\r');
                if (replace)
                {
                    *replace = L'\0';
                }
                replace = wcschr(password, L'\n');
                if (replace)
                {
                    *replace = L'\0';
                }
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                closesocket(connectSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    if(globalReturnsTrue())
    {
        {
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            char hashData[100] = HASH_INPUT;
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            do
            {
                BYTE payload[(100 - 1) * sizeof(wchar_t)]; /* a a a a a a a a */
                DWORD payloadBytes;
                /* a a a a a a a */
                payloadBytes = decodeHexWChars(payload, sizeof(payload), password);
                /* a a a a a a a a a a a a a
                 * a a a a a a */
                SecureZeroMemory(password, 100 * sizeof(wchar_t));
                /* a a a */
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
                {
                    break;
                }
                /* a a a */
                if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
                {
                    break;
                }
                /* a a a a */
                if(!CryptHashData(hHash, (BYTE*)hashData, strlen(hashData), 0))
                {
                    break;
                }
                /* a a a a a a a */
                if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
                {
                    break;
                }
                /* a a a a */
                if(!CryptDecrypt(hKey, 0, 1, 0, payload, &payloadBytes))
                {
                    break;
                }
                /* a a a a a a */
                memcpy(password, payload, payloadBytes);
                password[payloadBytes / sizeof(wchar_t)] = L'\0';
            }
            while (0);
            if (hKey)
            {
                CryptDestroyKey(hKey);
            }
            if (hHash)
            {
                CryptDestroyHash(hHash);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            /* a a a a a a a a a a a */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void zqoG2B1()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a
        * a a a a a a */
        wcscpy(password, L"Password1234!");
    }
    if(globalReturnsTrue())
    {
        {
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            /* a a a a a a a a a a a */
            /* a a a a a a a a a a a a a a */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void zqoG2B2()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a
        * a a a a a a */
        wcscpy(password, L"Password1234!");
    }
    if(globalReturnsTrue())
    {
        {
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            /* a a a a a a a a a a a */
            /* a a a a a a a a a a a a a a */
            if (LogonUserW(
                        username,
                        domain,
                        password,
                        LOGON32_LOGON_NETWORK,
                        LOGON32_PROVIDER_DEFAULT,
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
        }
    }
}

void eJikBapmACCdYViNoDTm_zqo()
{
    zqoB2G1();
    zqoB2G2();
    zqoG2B1();
    zqoG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITzqo
    printLine("Calling zqo()...");
    eJikBapmACCdYViNoDTm_zqo();
    printLine("Finished zqo()");
#endif /* a */
#ifndef OMITWKO
    printLine("Calling WKO()...");
    eJikBapmACCdYViNoDTm_WKO();
    printLine("Finished WKO()");
#endif /* a */
    return 0;
}

#endif
