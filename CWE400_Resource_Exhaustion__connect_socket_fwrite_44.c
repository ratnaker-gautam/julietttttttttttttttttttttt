/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a
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
#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#define SENTENCE "This is the sentence we are printing to the file. "

#ifndef OMITUDu

static void UDuSink(int count)
{
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_UDu.txt";
        pFile = fopen(filename, "w+");
        if (pFile == NULL)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a
         * a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
            {
                exit(1);
            }
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}

void DCbsNBDSvszrDueiPNwO_UDu()
{
    int count;
    /* a a a a */
    void (*funcPtr) (int) = UDuSink;
    /* a a */
    count = -1;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        char inputBuffer[CHAR_ARRAY_SIZE];
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            /* a a a a a a a a */
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
            recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            inputBuffer[recvResult] = '\0';
            /* a a a */
            count = atoi(inputBuffer);
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    /* a a a a */
    funcPtr(count);
}

#endif /* a */

#ifndef OMITdnQ

/* a a a a a a a */
static void dnQG2BSink(int count)
{
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_UDu.txt";
        pFile = fopen(filename, "w+");
        if (pFile == NULL)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a
         * a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
            {
                exit(1);
            }
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}

static void dnQG2B()
{
    int count;
    void (*funcPtr) (int) = dnQG2BSink;
    /* a a */
    count = -1;
    /* a a a a a a */
    count = 20;
    funcPtr(count);
}

/* a a a a a a a */
static void dnQB2GSink(int count)
{
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_dnQ.txt";
        /* a a a a a a a a a a a a a a a a */
        if (count > 0 && count <= 20)
        {
            pFile = fopen(filename, "w+");
            if (pFile == NULL)
            {
                exit(1);
            }
            for (i = 0; i < (size_t)count; i++)
            {
                if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile)) exit(1);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}

static void dnQB2G()
{
    int count;
    void (*funcPtr) (int) = dnQB2GSink;
    /* a a */
    count = -1;
    {
#ifdef _WIN32
        WSADATA wsaData;
        int wsaDataInit = 0;
#endif
        int recvResult;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        char inputBuffer[CHAR_ARRAY_SIZE];
        do
        {
#ifdef _WIN32
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
#endif
            /* a a a a a a a a */
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
            recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            /* a a a */
            inputBuffer[recvResult] = '\0';
            /* a a a */
            count = atoi(inputBuffer);
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
#ifdef _WIN32
        if (wsaDataInit)
        {
            WSACleanup();
        }
#endif
    }
    funcPtr(count);
}

void DCbsNBDSvszrDueiPNwO_dnQ()
{
    dnQG2B();
    dnQB2G();
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
#ifndef OMITdnQ
    printLine("Calling dnQ()...");
    DCbsNBDSvszrDueiPNwO_dnQ();
    printLine("Finished dnQ()");
#endif /* a */
#ifndef OMITUDu
    printLine("Calling UDu()...");
    DCbsNBDSvszrDueiPNwO_UDu();
    printLine("Finished UDu()");
#endif /* a */
    return 0;
}

#endif
