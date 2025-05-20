/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

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

#ifndef OMITeKv

void mVAqAGuVsmpZaFEOsWmU_eKvSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}

#endif /* a */

#ifndef OMITkWH

/* a a a a a a a */
void mVAqAGuVsmpZaFEOsWmU_kWHG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}

/* a a a a a a a */
void mVAqAGuVsmpZaFEOsWmU_kWHB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a */
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}

#endif /* a */
