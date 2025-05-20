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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* a a a a */

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"

#pragma comment(lib, "advapi32.lib")

#define HASH_INPUT "ABCDEFG123456" /* a a a */

typedef struct _uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType
{
    char * structFirst;
} uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType;

#ifndef OMITUdL

/* a a a */
void uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_UdLSink(uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct);

void uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_UdL()
{
    char * password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            /* a a a a a a a a a a a a a
             * a a a a a a a a a a a a a */
            /* a a a a a a a a */
            recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
        if (connectSocket != INVALID_SOCKET)
        {
            closesocket(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    myStruct.structFirst = password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_UdLSink(myStruct);
}

#endif /* a */

#ifndef OMITJmB

/* a a a a a a a */
void uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_JmBG2BSink(uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct);

static void JmBG2B()
{
    char * password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    /* a a a a a a a a a a a a
    * a a a a a a */
    strcpy(password, "Password1234!");
    myStruct.structFirst = password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_JmBG2BSink(myStruct);
}

/* a a a a a a a */
void uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_JmBB2GSink(uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct);

static void JmBB2G()
{
    char * password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_structType myStruct;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        char *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t passwordLen = strlen(password);
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            /* a a a a a a a a a a a a a
             * a a a a a a a a a a a a a */
            /* a a a a a a a a */
            recvResult = recv(connectSocket, (char*)(password + passwordLen), (100 - passwordLen - 1) * sizeof(char), 0);
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
        if (connectSocket != INVALID_SOCKET)
        {
            closesocket(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    myStruct.structFirst = password;
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67b_JmBB2GSink(myStruct);
}

void uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_JmB()
{
    JmBG2B();
    JmBB2G();
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
#ifndef OMITJmB
    printLine("Calling JmB()...");
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_JmB();
    printLine("Finished JmB()");
#endif /* a */
#ifndef OMITUdL
    printLine("Calling UdL()...");
    uARaqSzwsWKcnmjHLYFq_char_connect_socket_67_UdL();
    printLine("Finished UdL()");
#endif /* a */
    return 0;
}

#endif
