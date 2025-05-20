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
 * a a a a a a a a a a a a a a a a a a a
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

#ifndef OMITqUr

static void qUrVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void idQbhruAAmSFcZngcQzK_qUrSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    qUrVaSink(data, data);
}

#endif /* a */

#ifndef OMITUdi

/* a a a a a a a */
static void UdiG2BVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void idQbhruAAmSFcZngcQzK_UdiG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    UdiG2BVaSink(data, data);
}

/* a a a a a a a */
static void UdiB2GVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

void idQbhruAAmSFcZngcQzK_UdiB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    UdiB2GVaSink(data, data);
}

#endif /* a */
