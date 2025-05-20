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

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITqxE

void cvywsCyRlQMHcrIhQDuV_qxE()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = strlen(password);
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
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
    if(STATIC_CONST_FIVE==5)
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
    }
}

#endif /* a */

#ifndef OMITClL

/* a a a a a a a a a a a a a */
static void ClLB2G1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = strlen(password);
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
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
    if(STATIC_CONST_FIVE!=5)
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
    }
}

/* a a a a a a a a a a a a a a */
static void ClLB2G2()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t passwordLen = strlen(password);
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
                recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
    if(STATIC_CONST_FIVE==5)
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
    }
}

/* a a a a a a a a a a a a a */
static void ClLG2B1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a
        * a a a a a a */
        strcpy(password, "Password1234!");
    }
    if(STATIC_CONST_FIVE==5)
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
    }
}

/* a a a a a a a a a a a a a a */
static void ClLG2B2()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a
        * a a a a a a */
        strcpy(password, "Password1234!");
    }
    if(STATIC_CONST_FIVE==5)
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
    }
}

void cvywsCyRlQMHcrIhQDuV_ClL()
{
    ClLB2G1();
    ClLB2G2();
    ClLG2B1();
    ClLG2B2();
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
#ifndef OMITClL
    printLine("Calling ClL()...");
    cvywsCyRlQMHcrIhQDuV_ClL();
    printLine("Finished ClL()");
#endif /* a */
#ifndef OMITqxE
    printLine("Calling qxE()...");
    cvywsCyRlQMHcrIhQDuV_qxE();
    printLine("Finished qxE()");
#endif /* a */
    return 0;
}

#endif
