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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define ILc_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define WrF_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define ILc_OS_COMMAND "ls -la"
#define WrF_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITILc

void HiHdARdzHoGlmHjjzPtG_ILc()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a */
        strcpy(data, ILc_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITWrF

/* a a a a a a a a a a a a */
static void WrFG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        strcpy(data, WrF_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

/* a a a a a a a a a a a a a a */
static void WrFG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        strcpy(data, WrF_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void HiHdARdzHoGlmHjjzPtG_WrF()
{
    WrFG2B1();
    WrFG2B2();
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
#ifndef OMITWrF
    printLine("Calling WrF()...");
    HiHdARdzHoGlmHjjzPtG_WrF();
    printLine("Finished WrF()");
#endif /* a */
#ifndef OMITILc
    printLine("Calling ILc()...");
    HiHdARdzHoGlmHjjzPtG_ILc();
    printLine("Finished ILc()");
#endif /* a */
    return 0;
}

#endif
