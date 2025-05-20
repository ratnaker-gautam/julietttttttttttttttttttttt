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
 * a a a a a a a a
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
#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

/* a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a
 */
static int staticFive = 5;

#ifndef OMITIJX

void ScdaUEnyHxpBLIORSxUo_IJX()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive==5)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            SOCKET connectSocket = INVALID_SOCKET;
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
                recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
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
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITgBn

/* a a a a a a a a a a a a */
static void gBnG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

/* a a a a a a a a a a a a a a */
static void gBnG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive==5)
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void ScdaUEnyHxpBLIORSxUo_gBn()
{
    gBnG2B1();
    gBnG2B2();
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
#ifndef OMITgBn
    printLine("Calling gBn()...");
    ScdaUEnyHxpBLIORSxUo_gBn();
    printLine("Finished gBn()");
#endif /* a */
#ifndef OMITIJX
    printLine("Calling IJX()...");
    ScdaUEnyHxpBLIORSxUo_IJX();
    printLine("Finished IJX()");
#endif /* a */
    return 0;
}

#endif
