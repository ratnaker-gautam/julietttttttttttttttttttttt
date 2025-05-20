/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a
 * a a a a a a
 * a
 *    a a a a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

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
#define CHAR_ARRAY_SIZE 20

#ifndef OMITOxZ

void tcKkVaJckMExozJnvLib_OxZSink(float * dataPtr)
{
    float data = *dataPtr;
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

#endif /* a */

#ifndef OMITOfI

/* a a a a a a a */
void tcKkVaJckMExozJnvLib_OfIG2BSink(float * dataPtr)
{
    float data = *dataPtr;
    {
        /* a a a a a a */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}

/* a a a a a a a */
void tcKkVaJckMExozJnvLib_OfIB2GSink(float * dataPtr)
{
    float data = *dataPtr;
    /* a a a a a a a a a a */
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}

#endif /* a */
