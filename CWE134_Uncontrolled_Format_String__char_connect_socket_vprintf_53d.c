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
 * a a a a a a a a a a a a a a a a a a a a a a a a a a a
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

#ifndef OMITADZ

static void ADZVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void GEjIEPWmWqWsBCCoxooM_ADZSink(char * data)
{
    ADZVaSink(data, data);
}

#endif /* a */

#ifndef OMITOSb

/* a a a a a a a */
static void OSbG2BVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void GEjIEPWmWqWsBCCoxooM_OSbG2BSink(char * data)
{
    OSbG2BVaSink(data, data);
}

/* a a a a a a a */
static void OSbB2GVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

void GEjIEPWmWqWsBCCoxooM_OSbB2GSink(char * data)
{
    OSbB2GVaSink(data, data);
}

#endif /* a */
