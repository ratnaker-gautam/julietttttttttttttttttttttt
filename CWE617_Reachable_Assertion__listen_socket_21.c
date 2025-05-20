/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */
#define CLOSE_SOCKET closesocket
#else
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
#define LISTEN_BACKLOG 5
#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMITpYO

/* a a a a a a a a a a a a a a */
static int pYOStatic = 0;

static int pYOSource(int data)
{
    if(pYOStatic)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            char inputBuffer[CHAR_ARRAY_SIZE];
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
                recvResult = recv(acceptSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                /* a a a */
                inputBuffer[recvResult] = '\0';
                /* a a a */
                data = atoi(inputBuffer);
            }
            while (0);
            if (listenSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(listenSocket);
            }
            if (acceptSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(acceptSocket);
            }
#ifdef _WIN32
            if (wsaDataInit)
            {
                WSACleanup();
            }
#endif
        }
    }
    return data;
}

void etQFRtArfESgLybzEylW_pYO()
{
    int data;
    /* a a */
    data = -1;
    pYOStatic = 1; /* a */
    data = pYOSource(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITgLm

/* a a a a a a a a a a a a a a */
static int gLmG2B1Static = 0;
static int gLmG2B2Static = 0;

/* a a a a a a a a a a a a a a a a */
static int gLmG2B1Source(int data)
{
    if(gLmG2B1Static)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    return data;
}

static void gLmG2B1()
{
    int data;
    /* a a */
    data = -1;
    gLmG2B1Static = 0; /* a */
    data = gLmG2B1Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

/* a a a a a a a a a a a a a a a a a */
static int gLmG2B2Source(int data)
{
    if(gLmG2B2Static)
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    return data;
}

static void gLmG2B2()
{
    int data;
    /* a a */
    data = -1;
    gLmG2B2Static = 1; /* a */
    data = gLmG2B2Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void etQFRtArfESgLybzEylW_gLm()
{
    gLmG2B1();
    gLmG2B2();
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
#ifndef OMITgLm
    printLine("Calling gLm()...");
    etQFRtArfESgLybzEylW_gLm();
    printLine("Finished gLm()");
#endif /* a */
#ifndef OMITpYO
    printLine("Calling pYO()...");
    etQFRtArfESgLybzEylW_pYO();
    printLine("Finished pYO()");
#endif /* a */
    return 0;
}

#endif
