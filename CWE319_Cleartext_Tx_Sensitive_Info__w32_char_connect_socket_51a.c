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

#ifndef OMITsaN

/* a a a */
void hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_saNSink(char * password);

void hIYueuSlYmPFQTVuHbbH_char_connect_socket_51_saN()
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
    hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_saNSink(password);
}

#endif /* a */

#ifndef OMITKbp

/* a a a a a a a */
void hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_KbpG2BSink(char * password);

static void KbpG2B()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    /* a a a a a a a a a a a a
    * a a a a a a */
    strcpy(password, "Password1234!");
    hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_KbpG2BSink(password);
}

/* a a a a a a a */
void hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_KbpB2GSink(char * password);

static void KbpB2G()
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
    hIYueuSlYmPFQTVuHbbH_char_connect_socket_51b_KbpB2GSink(password);
}

void hIYueuSlYmPFQTVuHbbH_char_connect_socket_51_Kbp()
{
    KbpG2B();
    KbpB2G();
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
#ifndef OMITKbp
    printLine("Calling Kbp()...");
    hIYueuSlYmPFQTVuHbbH_char_connect_socket_51_Kbp();
    printLine("Finished Kbp()");
#endif /* a */
#ifndef OMITsaN
    printLine("Calling saN()...");
    hIYueuSlYmPFQTVuHbbH_char_connect_socket_51_saN();
    printLine("Finished saN()");
#endif /* a */
    return 0;
}

#endif
