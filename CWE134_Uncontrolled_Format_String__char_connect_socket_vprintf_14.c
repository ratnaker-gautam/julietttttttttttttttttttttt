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
 * a a a a a a a a
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

#ifndef OMITivg

static void ivgVaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void ciamZAYpByqdhOoPkPsT_ivg()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t dataLen = strlen(data);
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
                recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                data[dataLen + recvResult / sizeof(char)] = '\0';
                /* a a */
                replace = strchr(data, '\r');
                if (replace)
                {
                    *replace = '\0';
                }
                replace = strchr(data, '\n');
                if (replace)
                {
                    *replace = '\0';
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
    if(globalFive==5)
    {
        ivgVaSinkB(data, data);
    }
}

#endif /* a */

#ifndef OMITuTJ

static void uTJB2G1VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void uTJB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t dataLen = strlen(data);
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
                recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                data[dataLen + recvResult / sizeof(char)] = '\0';
                /* a a */
                replace = strchr(data, '\r');
                if (replace)
                {
                    *replace = '\0';
                }
                replace = strchr(data, '\n');
                if (replace)
                {
                    *replace = '\0';
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
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        uTJB2G1VaSinkG(data, data);
    }
}

static void uTJB2G2VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void uTJB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            char *replace;
            SOCKET connectSocket = INVALID_SOCKET;
            size_t dataLen = strlen(data);
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
                recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(char) * (100 - dataLen - 1), 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                data[dataLen + recvResult / sizeof(char)] = '\0';
                /* a a */
                replace = strchr(data, '\r');
                if (replace)
                {
                    *replace = '\0';
                }
                replace = strchr(data, '\n');
                if (replace)
                {
                    *replace = '\0';
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
    if(globalFive==5)
    {
        uTJB2G2VaSinkG(data, data);
    }
}

static void uTJG2B1VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void uTJG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(globalFive==5)
    {
        uTJG2B1VaSinkB(data, data);
    }
}

static void uTJG2B2VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void uTJG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(globalFive==5)
    {
        uTJG2B2VaSinkB(data, data);
    }
}

void ciamZAYpByqdhOoPkPsT_uTJ()
{
    uTJG2B1();
    uTJG2B2();
    uTJB2G1();
    uTJB2G2();
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
#ifndef OMITuTJ
    printLine("Calling uTJ()...");
    ciamZAYpByqdhOoPkPsT_uTJ();
    printLine("Finished uTJ()");
#endif /* a */
#ifndef OMITivg
    printLine("Calling ivg()...");
    ciamZAYpByqdhOoPkPsT_ivg();
    printLine("Finished ivg()");
#endif /* a */
    return 0;
}

#endif
