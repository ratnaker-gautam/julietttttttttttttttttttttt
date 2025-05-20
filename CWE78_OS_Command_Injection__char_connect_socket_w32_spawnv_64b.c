/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define COMMAND_INT_PATH "%WINDIR%\\system32\\cmd.exe"
#define COMMAND_INT "cmd.exe"
#define COMMAND_ARG1 "/c"
#define COMMAND_ARG2 "dir "
#define COMMAND_ARG3 data
#else /* a a */
#include <unistd.h>
#define COMMAND_INT_PATH "/bin/sh"
#define COMMAND_INT "sh"
#define COMMAND_ARG1 "-c"
#define COMMAND_ARG2 "ls "
#define COMMAND_ARG3 data
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
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#include <process.h>

#ifndef OMITcVo

void lQBFqiIuyzWJBOSnvQgf_cVoSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}

#endif /* a */

#ifndef OMITMmr

/* a a a a a a a */
void lQBFqiIuyzWJBOSnvQgf_MmrG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
    }
}

#endif /* a */
