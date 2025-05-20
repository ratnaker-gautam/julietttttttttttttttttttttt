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

#ifndef OMITsEQ

void OfhkEeKbatoFcLuFysrl_sEQ()
{
    if(globalTrue)
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

#ifndef OMITdzL

/* a a a a a a */
static void dzL1()
{
    if(globalFalse)
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
static void dzL2()
{
    if(globalTrue)
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

void OfhkEeKbatoFcLuFysrl_dzL()
{
    dzL1();
    dzL2();
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
#ifndef OMITdzL
    printLine("Calling dzL()...");
    OfhkEeKbatoFcLuFysrl_dzL();
    printLine("Finished dzL()");
#endif /* a */
#ifndef OMITsEQ
    printLine("Calling sEQ()...");
    OfhkEeKbatoFcLuFysrl_sEQ();
    printLine("Finished sEQ()");
#endif /* a */
    return 0;
}

#endif
