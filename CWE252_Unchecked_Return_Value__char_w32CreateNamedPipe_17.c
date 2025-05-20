/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#include <windows.h>
#define BUFSIZE 1024

#ifndef OMITTWn

void FbCDAMZJoEiAEifSnnbY_TWn()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char * pipeName = "\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeA(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, /* a a a a a a a */
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            /* a a a a a a a */
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a */
            CloseHandle(hPipe);
        }
    }
}

#endif /* a */

#ifndef OMITvXW

/* a a a a a a a a */
static void vXW1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char * pipeName = "\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeA(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, /* a a a a a a a */
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            /* a a a a a a a a a a a */
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            /* a a a a a a a a a a a a a a a a
             * a a a a a a a a a a a */
            CloseHandle(hPipe);
        }
    }
}

void FbCDAMZJoEiAEifSnnbY_vXW()
{
    vXW1();
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
#ifndef OMITvXW
    printLine("Calling vXW()...");
    FbCDAMZJoEiAEifSnnbY_vXW();
    printLine("Finished vXW()");
#endif /* a */
#ifndef OMITTWn
    printLine("Calling TWn()...");
    FbCDAMZJoEiAEifSnnbY_TWn();
    printLine("Finished TWn()");
#endif /* a */
    return 0;
}

#endif
