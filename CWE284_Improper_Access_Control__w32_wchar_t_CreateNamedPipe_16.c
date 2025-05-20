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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )
#define BUFSIZE 1024
#define PIPE_NAME L"\\\\.\\pipe\\TestPipe"

#ifndef OMITVeF

void RXlhqhRQZUAeZNvvazBu_VeF()
{
    while(1)
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
        break;
    }
}

#endif /* a */

#ifndef OMITQzx

/* a a a a a a a a */
static void Qzx1()
{
    while(1)
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
        break;
    }
}

void RXlhqhRQZUAeZNvvazBu_Qzx()
{
    Qzx1();
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
#ifndef OMITQzx
    printLine("Calling Qzx()...");
    RXlhqhRQZUAeZNvvazBu_Qzx();
    printLine("Finished Qzx()");
#endif /* a */
#ifndef OMITVeF
    printLine("Calling VeF()...");
    RXlhqhRQZUAeZNvvazBu_VeF();
    printLine("Finished VeF()");
#endif /* a */
    return 0;
}

#endif
