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
 * a a a a a a a a a a a a a a a a a a a a a
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

namespace FQjMctBBMAmBIfjfbVfE
{

#ifndef OMITDIu

static void DIuVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}

static void DIuSource(wchar_t * &data)
{
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
}

void DIu()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    DIuSource(data);
    DIuVaSink(data, data);
}

#endif /* a */

#ifndef OMITEHY

/* a a a a a a a */
static void EHYG2BVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}

static void EHYG2BSource(wchar_t * &data)
{
    /* a a a a a a a a a a a a */
    wcscpy(data, L"fixedstringtest");
}

static void EHYG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    EHYG2BSource(data);
    EHYG2BVaSink(data, data);
}

/* a a a a a a a */
static void EHYB2GVaSink(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}

static void EHYB2GSource(wchar_t * &data)
{
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
}

static void EHYB2G()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    EHYB2GSource(data);
    EHYB2GVaSink(data, data);
}

void EHY()
{
    EHYG2B();
    EHYB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace FQjMctBBMAmBIfjfbVfE; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITEHY
    printLine("Calling EHY()...");
    EHY();
    printLine("Finished EHY()");
#endif /* a */
#ifndef OMITDIu
    printLine("Calling DIu()...");
    DIu();
    printLine("Finished DIu()");
#endif /* a */
    return 0;
}

#endif
