/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define FULL_COMMAND L"dir "
#else
#include <unistd.h>
#define FULL_COMMAND L"ls "
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
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#ifdef _WIN32
#define SYSTEM _wsystem
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITfRZ

void QjJBbuUyWSnSrZwViMyW_fRZ()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(globalFive==5)
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
    /* a a a a a a a a a a a */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITmvl

/* a a a a a a a a a a a a */
static void mvlG2B1()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a a */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

/* a a a a a a a a a a a a a a */
static void mvlG2B2()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(globalFive==5)
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a a */
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void QjJBbuUyWSnSrZwViMyW_mvl()
{
    mvlG2B1();
    mvlG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITmvl
    printLine("Calling mvl()...");
    QjJBbuUyWSnSrZwViMyW_mvl();
    printLine("Finished mvl()");
#endif /* a */
#ifndef OMITfRZ
    printLine("Calling fRZ()...");
    QjJBbuUyWSnSrZwViMyW_fRZ();
    printLine("Finished fRZ()");
#endif /* a */
    return 0;
}

#endif
