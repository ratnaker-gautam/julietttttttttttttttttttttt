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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#pragma comment(lib, "advapi32.lib")
#define BUFSIZE 1024

#ifndef OMITgAw

void nekzSYtYzoTKNbheboEq_gAw()
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

#endif /* a */

#ifndef OMITAnG

static void AnG1()
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

void nekzSYtYzoTKNbheboEq_AnG()
{
    AnG1();
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
#ifndef OMITAnG
    printLine("Calling AnG()...");
    nekzSYtYzoTKNbheboEq_AnG();
    printLine("Finished AnG()");
#endif /* a */
#ifndef OMITgAw
    printLine("Calling gAw()...");
    nekzSYtYzoTKNbheboEq_gAw();
    printLine("Finished gAw()");
#endif /* a */
    return 0;
}

#endif
