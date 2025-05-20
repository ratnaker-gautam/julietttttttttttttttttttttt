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
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

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

extern wchar_t * mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_nrKData;
extern wchar_t * mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_oBFG2BData;
extern wchar_t * mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_oBFB2GData;

#ifndef OMITnrK

void saSdpOVOlxuBEivTMknQ_nrKSink()
{
    wchar_t * data = mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_nrKData;
    /* a a a a a a a a a a a a a */
    wprintf(data);
}

#endif /* a */

#ifndef OMIToBF

/* a a a a a a a */
void saSdpOVOlxuBEivTMknQ_oBFG2BSink()
{
    wchar_t * data = mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_oBFG2BData;
    /* a a a a a a a a a a a a a */
    wprintf(data);
}

/* a a a a a a a */
void saSdpOVOlxuBEivTMknQ_oBFB2GSink()
{
    wchar_t * data = mQOrCJuhBViepjzxYdcX__wchar_t_listen_socket_printf_68_oBFB2GData;
    /* a a a a a a a a a */
    wprintf(L"%s\n", data);
}

#endif /* a */
