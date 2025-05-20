/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a a a a a a
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )
#define BUFSIZE 1024
#define PIPE_NAME L"\\\\.\\pipe\\TestPipe"

#ifndef OMITvZy

void QBXuOVFukTAvcJmzoVwR_vZy()
{
    {
        HANDLE hPipe;
        wchar_t * pipeName = PIPE_NAME;
        /* a a a a a a a a a a
         * a a a a a a a a a a a */
        hPipe = CreateNamedPipeW(
                    pipeName,
                    PIPE_ACCESS_DUPLEX,
                    PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                    PIPE_UNLIMITED_INSTANCES,
                    BUFSIZE,
                    BUFSIZE,
                    0,
                    NULL);
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            printLine("Windows pipe creation failed");
        }
        else
        {
            printLine("Windows pipe created successfully");
            CloseHandle(hPipe);
        }
    }
}

#endif /* a */

#ifndef OMIToLk

static void oLk1()
{
    {
        HANDLE hPipe;
        wchar_t * pipeName = PIPE_NAME;
        /* a a a a a a a a a a a */
        hPipe = CreateNamedPipeW(
                    pipeName,
                    FILE_FLAG_FIRST_PIPE_INSTANCE | PIPE_ACCESS_DUPLEX,
                    PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                    PIPE_UNLIMITED_INSTANCES,
                    BUFSIZE,
                    BUFSIZE,
                    0,
                    NULL);
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            printLine("Windows pipe creation failed");
        }
        else
        {
            printLine("Windows pipe created successfully");
            CloseHandle(hPipe);
        }
    }
}

void QBXuOVFukTAvcJmzoVwR_oLk()
{
    oLk1();
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
#ifndef OMIToLk
    printLine("Calling oLk()...");
    QBXuOVFukTAvcJmzoVwR_oLk();
    printLine("Finished oLk()");
#endif /* a */
#ifndef OMITvZy
    printLine("Calling vZy()...");
    QBXuOVFukTAvcJmzoVwR_vZy();
    printLine("Finished vZy()");
#endif /* a */
    return 0;
}

#endif
