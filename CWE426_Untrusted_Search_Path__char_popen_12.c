/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define bPy_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define uFY_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define bPy_OS_COMMAND "ls -la"
#define uFY_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITbPy

void AqJYJDgtCkMAZwTFuwTY_bPy()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        strcpy(data, bPy_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        strcpy(data, uFY_OS_COMMAND);
    }
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

#endif /* a */

#ifndef OMITuFY

/* a a a a a a a a a a a a
 * a a a a a */
static void uFYG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        strcpy(data, uFY_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        strcpy(data, uFY_OS_COMMAND);
    }
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

void AqJYJDgtCkMAZwTFuwTY_uFY()
{
    uFYG2B();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITuFY
    printLine("Calling uFY()...");
    AqJYJDgtCkMAZwTFuwTY_uFY();
    printLine("Finished uFY()");
#endif /* a */
#ifndef OMITbPy
    printLine("Calling bPy()...");
    AqJYJDgtCkMAZwTFuwTY_bPy();
    printLine("Finished bPy()");
#endif /* a */
    return 0;
}

#endif
