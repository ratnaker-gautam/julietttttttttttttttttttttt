/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

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

#ifndef OMITgGi

void ooYsdNqUOGAJuNJQnYGH_gGiSink(int data)
{
    /* a a a a a a */
    printIntLine(100 / data);
}

#endif /* a */

#ifndef OMITeEB

/* a a a a a a a */
void ooYsdNqUOGAJuNJQnYGH_eEBG2BSink(int data)
{
    /* a a a a a a */
    printIntLine(100 / data);
}

/* a a a a a a a */
void ooYsdNqUOGAJuNJQnYGH_eEBB2GSink(int data)
{
    /* a a a a a a */
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}

#endif /* a */
