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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#ifndef OMITjyu

/* a a a a a a a a a a a a a a */
int LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyuGlobal = 0;

void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyuSink(wchar_t * password);

void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyu()
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
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyuGlobal = 1; /* a */
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyuSink(password);
}

#endif /* a */

#ifndef OMITnrJ

/* a a a a a a a a a a a a a a */
int LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G1Global = 0;
int LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G2Global = 0;
int LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJG2BGlobal = 0;

/* a a a a a a a a a a a a a a a a */
void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G1Sink(wchar_t * password);

static void nrJB2G1()
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
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G1Global = 0; /* a */
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G1Sink(password);
}

/* a a a a a a a a a a a a a a a a a */
void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G2Sink(wchar_t * password);

static void nrJB2G2()
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
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G2Global = 1; /* a */
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJB2G2Sink(password);
}

/* a a a a a a */
void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJG2BSink(wchar_t * password);

static void nrJG2B()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    /* a a a a a a a a a a a a
    * a a a a a a */
    wcscpy(password, L"Password1234!");
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJG2BGlobal = 1; /* a */
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJG2BSink(password);
}

void LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJ()
{
    nrJB2G1();
    nrJB2G2();
    nrJG2B();
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
#ifndef OMITnrJ
    printLine("Calling nrJ()...");
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_nrJ();
    printLine("Finished nrJ()");
#endif /* a */
#ifndef OMITjyu
    printLine("Calling jyu()...");
    LFXTtXsxKKEnJBQeykHe_wchar_t_connect_socket_22_jyu();
    printLine("Finished jyu()");
#endif /* a */
    return 0;
}

#endif
