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

#ifndef OMITKCm

static void KCmVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

void KmHhEhWyEGarOBaRrQTt_KCmSink(char * data)
{
    KCmVaSink(data, data);
}

#endif /* a */

#ifndef OMITwbS

/* a a a a a a a */
static void wbSG2BVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

void KmHhEhWyEGarOBaRrQTt_wbSG2BSink(char * data)
{
    wbSG2BVaSink(data, data);
}

/* a a a a a a a */
static void wbSB2GVaSink(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}

void KmHhEhWyEGarOBaRrQTt_wbSB2GSink(char * data)
{
    wbSB2GVaSink(data, data);
}

#endif /* a */
