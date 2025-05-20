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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */

#define TCP_PORT 27015
#define LISTEN_BACKLOG 5

#pragma comment(lib, "advapi32.lib")

#define HASH_INPUT "ABCDEFG123456" /* a a a */

#ifndef OMITMdg

void nLAHdlXMPwTyAiMRRNLL_Mdg()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    while(1)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            size_t passwordLen = strlen(password);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(TCP_PORT);
                if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == SOCKET_ERROR)
                {
                    break;
                }
                /* a a a a a a a a */
                /* a a a a a a a a */
                recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                password[passwordLen + recvResult / sizeof(char)] = '\0';
                /* a a */
                replace = strchr(password, '\r');
                if (replace)
                {
                    *replace = '\0';
                }
                replace = strchr(password, '\n');
                if (replace)
                {
                    *replace = '\0';
                }
            }
            while (0);
            if (listenSocket != INVALID_SOCKET)
            {
                closesocket(listenSocket);
            }
            if (acceptSocket != INVALID_SOCKET)
            {
                closesocket(acceptSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
        break;
    }
    while(1)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            /* a a a a a a a a a a a */
            /* a a a a a a a a a a a a a a */
            if (LogonUserA(
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
        break;
    }
}

#endif /* a */

#ifndef OMITxuH

/* a a a a a a a a a a a a a a a */
static void xuHB2G()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    while(1)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            size_t passwordLen = strlen(password);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(TCP_PORT);
                if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == SOCKET_ERROR)
                {
                    break;
                }
                /* a a a a a a a a */
                /* a a a a a a a a */
                recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                password[passwordLen + recvResult / sizeof(char)] = '\0';
                /* a a */
                replace = strchr(password, '\r');
                if (replace)
                {
                    *replace = '\0';
                }
                replace = strchr(password, '\n');
                if (replace)
                {
                    *replace = '\0';
                }
            }
            while (0);
            if (listenSocket != INVALID_SOCKET)
            {
                closesocket(listenSocket);
            }
            if (acceptSocket != INVALID_SOCKET)
            {
                closesocket(acceptSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
        break;
    }
    while(1)
    {
        {
            HCRYPTPROV hCryptProv = 0;
            HCRYPTHASH hHash = 0;
            HCRYPTKEY hKey = 0;
            char hashData[100] = HASH_INPUT;
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            do
            {
                BYTE payload[(100 - 1) * sizeof(char)]; /* a a a a a a a a */
                DWORD payloadBytes;
                /* a a a a a a a */
                payloadBytes = decodeHexChars(payload, sizeof(payload), password);
                /* a a a a a a a a a a a a a
                 * a a a a a a */
                SecureZeroMemory(password, 100 * sizeof(char));
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
                password[payloadBytes / sizeof(char)] = '\0';
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
            if (LogonUserA(
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
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void xuHG2B()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    while(1)
    {
        /* a a a a a a a a a a a a
        * a a a a a a */
        strcpy(password, "Password1234!");
        break;
    }
    while(1)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            /* a a a a a a a a a a a */
            /* a a a a a a a a a a a a a a */
            if (LogonUserA(
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
        break;
    }
}

void nLAHdlXMPwTyAiMRRNLL_xuH()
{
    xuHB2G();
    xuHG2B();
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
#ifndef OMITxuH
    printLine("Calling xuH()...");
    nLAHdlXMPwTyAiMRRNLL_xuH();
    printLine("Finished xuH()");
#endif /* a */
#ifndef OMITMdg
    printLine("Calling Mdg()...");
    nLAHdlXMPwTyAiMRRNLL_Mdg();
    printLine("Finished Mdg()");
#endif /* a */
    return 0;
}

#endif
