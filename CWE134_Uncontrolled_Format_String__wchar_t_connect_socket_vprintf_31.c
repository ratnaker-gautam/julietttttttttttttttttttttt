/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include <stdarg.h>
#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */
#define CLOSE_SOCKET closesocket
#else /* a a */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#ifndef OMITGkP

static void GkPVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vwprintf(data, args);
        va_end(args);
    }
}

void pVjqyHrlxOYcntpWNKkF_GkP()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        wchar_t *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t dataLen = wcslen(data);
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            /* a a a a a a a a */
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
            recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(wchar_t) * (100 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            data[dataLen + recvResult / sizeof(wchar_t)] = L'\0';
            /* a a */
            replace = wcschr(data, L'\r');
            if (replace)
            {
                *replace = L'\0';
            }
            replace = wcschr(data, L'\n');
            if (replace)
            {
                *replace = L'\0';
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        GkPVaSink(data, data);
    }
}

#endif /* a */

#ifndef OMITGio

/* a a a a a a a */
static void GioG2BVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vwprintf(data, args);
        va_end(args);
    }
}

static void GioG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    /* a a a a a a a a a a a a */
    wcscpy(data, L"fixedstringtest");
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        GioG2BVaSink(data, data);
    }
}

/* a a a a a a a */
static void GioB2GVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vwprintf(L"%s", args);
        va_end(args);
    }
}

static void GioB2G()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        wchar_t *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t dataLen = wcslen(data);
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            /* a a a a a a a a */
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
            recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(wchar_t) * (100 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            data[dataLen + recvResult / sizeof(wchar_t)] = L'\0';
            /* a a */
            replace = wcschr(data, L'\r');
            if (replace)
            {
                *replace = L'\0';
            }
            replace = wcschr(data, L'\n');
            if (replace)
            {
                *replace = L'\0';
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        GioB2GVaSink(data, data);
    }
}

void pVjqyHrlxOYcntpWNKkF_Gio()
{
    GioG2B();
    GioB2G();
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
#ifndef OMITGio
    printLine("Calling Gio()...");
    pVjqyHrlxOYcntpWNKkF_Gio();
    printLine("Finished Gio()");
#endif /* a */
#ifndef OMITGkP
    printLine("Calling GkP()...");
    pVjqyHrlxOYcntpWNKkF_GkP();
    printLine("Finished GkP()");
#endif /* a */
    return 0;
}

#endif
