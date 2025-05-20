/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a
 *    a a a a a a a a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */

#define TCP_PORT 27015
#define LISTEN_BACKLOG 5

#pragma comment(lib, "advapi32.lib")

#define HASH_INPUT "ABCDEFG123456" /* a a a */

char * DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_swQData;
char * DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJG2BData;
char * DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJB2GData;

#ifndef OMITswQ

/* a a a */
void DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_swQSink();

void DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_swQ()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (listenSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(TCP_PORT);
            if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == SOCKET_ERROR)
            {
                break;
            }
            /* a a a a a a a a */
            /* a a a a a a a a */
            recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            password[passwordLen + recvResult / sizeof(char)] = '\0';
            /* a a */
            replace = strchr(password, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(password, '\n');
            if (replace)
            {
                *replace = '\0';
            }
        }
        while (0);
        if (listenSocket != INVALID_SOCKET)
        {
            closesocket(listenSocket);
        }
        if (acceptSocket != INVALID_SOCKET)
        {
            closesocket(acceptSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_swQData = password;
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_swQSink();
}

#endif /* a */

#ifndef OMITDTJ

/* a a a */
void DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_DTJG2BSink();
void DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_DTJB2GSink();

/* a a a a a a a */
static void DTJG2B()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    /* a a a a a a a a a a a a
    * a a a a a a */
    strcpy(password, "Password1234!");
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJG2BData = password;
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_DTJG2BSink();
}

/* a a a a a a a */
static void DTJB2G()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (listenSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(TCP_PORT);
            if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == SOCKET_ERROR)
            {
                break;
            }
            /* a a a a a a a a */
            /* a a a a a a a a */
            recvResult = recv(acceptSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            password[passwordLen + recvResult / sizeof(char)] = '\0';
            /* a a */
            replace = strchr(password, '\r');
            if (replace)
            {
                *replace = '\0';
            }
            replace = strchr(password, '\n');
            if (replace)
            {
                *replace = '\0';
            }
        }
        while (0);
        if (listenSocket != INVALID_SOCKET)
        {
            closesocket(listenSocket);
        }
        if (acceptSocket != INVALID_SOCKET)
        {
            closesocket(acceptSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJB2GData = password;
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68b_DTJB2GSink();
}

void DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJ()
{
    DTJG2B();
    DTJB2G();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDTJ
    printLine("Calling DTJ()...");
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_DTJ();
    printLine("Finished DTJ()");
#endif /* a */
#ifndef OMITswQ
    printLine("Calling swQ()...");
    DOfuNpVQjtGikSQIWIlL_char_listen_socket_68_swQ();
    printLine("Finished swQ()");
#endif /* a */
    return 0;
}

#endif
