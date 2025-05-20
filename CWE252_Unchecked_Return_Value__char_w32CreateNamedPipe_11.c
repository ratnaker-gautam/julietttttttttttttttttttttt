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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#include <windows.h>
#define BUFSIZE 1024

#ifndef OMIToNV

void MaDBkFhxRTcwSMrmrRKF_oNV()
{
    if(globalReturnsTrue())
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

#ifndef OMITnAG

/* a a a a a a */
static void nAG1()
{
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
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

/* a a a a a a a a */
static void nAG2()
{
    if(globalReturnsTrue())
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

void MaDBkFhxRTcwSMrmrRKF_nAG()
{
    nAG1();
    nAG2();
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
#ifndef OMITnAG
    printLine("Calling nAG()...");
    MaDBkFhxRTcwSMrmrRKF_nAG();
    printLine("Finished nAG()");
#endif /* a */
#ifndef OMIToNV
    printLine("Calling oNV()...");
    MaDBkFhxRTcwSMrmrRKF_oNV();
    printLine("Finished oNV()");
#endif /* a */
    return 0;
}

#endif
