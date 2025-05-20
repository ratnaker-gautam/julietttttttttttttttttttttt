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
 * a a a a a a a a a a a a a a a a a a a a
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

extern int UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_PFiData;
extern int UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_TcuG2BData;
extern int UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_TcuB2GData;

#ifndef OMITPFi

void zfiuUsrqdBIRCFMUyQnf_PFiSink()
{
    int data = UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_PFiData;
    /* a a a a a a */
    printIntLine(100 / data);
}

#endif /* a */

#ifndef OMITTcu

/* a a a a a a a */
void zfiuUsrqdBIRCFMUyQnf_TcuG2BSink()
{
    int data = UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_TcuG2BData;
    /* a a a a a a */
    printIntLine(100 / data);
}

/* a a a a a a a */
void zfiuUsrqdBIRCFMUyQnf_TcuB2GSink()
{
    int data = UKBexCSFqBZRFAWwPJyA_listen_socket_divide_68_TcuB2GData;
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
