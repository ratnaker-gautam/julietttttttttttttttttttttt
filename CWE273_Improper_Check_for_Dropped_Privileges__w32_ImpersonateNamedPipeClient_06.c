/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a
 *    a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#pragma comment(lib, "advapi32.lib")
#define BUFSIZE 1024

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITaaZ

void pVTwMtXXtpBJXQscCBRV_aaZ()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeA(
                        "\\\\.\\pipe\\test_pipe",
                        PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            /* a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
            {
                CloseHandle(hPipe);
                exit(1);
            }
            /* a a a a a a a a
             * a a a a a a a a a a a
             * a a a a a a a a
             */
            ImpersonateNamedPipeClient(hPipe);
            printLine("Impersonated");
            if (!RevertToSelf())
            {
                exit(1);
            }
            CloseHandle(hPipe);
        }
    }
}

#endif /* a */

#ifndef OMITalm

/* a a a a a a */
static void alm1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeA(
                        "\\\\.\\pipe\\test_pipe",
                        PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            /* a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
            {
                CloseHandle(hPipe);
                exit(1);
            }
            /* a a a a a a a */
            if (!ImpersonateNamedPipeClient(hPipe))
            {
                printLine("Failed to impersonate");
            }
            else
            {
                printLine("Impersonated");
                if (!RevertToSelf())
                {
                    exit(1);
                }
            }
            CloseHandle(hPipe);
        }
    }
}

/* a a a a a a a a */
static void alm2()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeA(
                        "\\\\.\\pipe\\test_pipe",
                        PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            /* a a a a a a a a a a a
             * a a a a a a a a a a a a */
            if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
            {
                CloseHandle(hPipe);
                exit(1);
            }
            /* a a a a a a a */
            if (!ImpersonateNamedPipeClient(hPipe))
            {
                printLine("Failed to impersonate");
            }
            else
            {
                printLine("Impersonated");
                if (!RevertToSelf())
                {
                    exit(1);
                }
            }
            CloseHandle(hPipe);
        }
    }
}

void pVTwMtXXtpBJXQscCBRV_alm()
{
    alm1();
    alm2();
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
#ifndef OMITalm
    printLine("Calling alm()...");
    pVTwMtXXtpBJXQscCBRV_alm();
    printLine("Finished alm()");
#endif /* a */
#ifndef OMITaaZ
    printLine("Calling aaZ()...");
    pVTwMtXXtpBJXQscCBRV_aaZ();
    printLine("Finished aaZ()");
#endif /* a */
    return 0;
}

#endif
