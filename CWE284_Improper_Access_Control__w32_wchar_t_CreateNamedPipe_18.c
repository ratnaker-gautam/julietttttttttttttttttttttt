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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )
#define BUFSIZE 1024
#define PIPE_NAME L"\\\\.\\pipe\\TestPipe"

#ifndef OMITmxE

void LBHEWrknBSyiDKRRglNE_mxE()
{
    goto sink;
sink:
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

#ifndef OMITXTH

/* a a a a a a a a */
static void XTH1()
{
    goto sink;
sink:
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

void LBHEWrknBSyiDKRRglNE_XTH()
{
    XTH1();
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
#ifndef OMITXTH
    printLine("Calling XTH()...");
    LBHEWrknBSyiDKRRglNE_XTH();
    printLine("Finished XTH()");
#endif /* a */
#ifndef OMITmxE
    printLine("Calling mxE()...");
    LBHEWrknBSyiDKRRglNE_mxE();
    printLine("Finished mxE()");
#endif /* a */
    return 0;
}

#endif
