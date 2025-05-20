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
 * a a a a a a a a a a a a a a a a a a a
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

#ifndef OMITlTC

void RYpnqrlLeppgyyxxQdjn_lTCSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITcKV

/* a a a a a a a */
void RYpnqrlLeppgyyxxQdjn_cKVG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */
