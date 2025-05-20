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
 * a a a a a a a a a a a a a a a a a a a a
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

wchar_t * MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_WKwData;
wchar_t * MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_ClmG2BData;
wchar_t * MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_ClmB2GData;

#ifndef OMITWKw

/* a a a */
void MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_WKwSink();

void MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_WKw()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
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
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_WKwData = password;
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_WKwSink();
}

#endif /* a */

#ifndef OMITClm

/* a a a */
void MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_ClmG2BSink();
void MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_ClmB2GSink();

/* a a a a a a a */
static void ClmG2B()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    /* a a a a a a a a a a a a
    * a a a a a a */
    wcscpy(password, L"Password1234!");
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_ClmG2BData = password;
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_ClmG2BSink();
}

/* a a a a a a a */
static void ClmB2G()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
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
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_ClmB2GData = password;
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68b_ClmB2GSink();
}

void MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_Clm()
{
    ClmG2B();
    ClmB2G();
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
#ifndef OMITClm
    printLine("Calling Clm()...");
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_Clm();
    printLine("Finished Clm()");
#endif /* a */
#ifndef OMITWKw
    printLine("Calling WKw()...");
    MWdyDNzIGgxkoSQkfcIZ_wchar_t_connect_socket_68_WKw();
    printLine("Finished WKw()");
#endif /* a */
    return 0;
}

#endif
