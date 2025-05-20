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
#define IFP_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define yin_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define IFP_OS_COMMAND L"ls -la"
#define yin_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM _wsystem
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITIFP

void ekbcimrlCOaJPPiFNPzM_IFP()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        wcscpy(data, IFP_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        wcscpy(data, yin_OS_COMMAND);
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

#ifndef OMITyin

/* a a a a a a a a a a a a
 * a a a a a */
static void yinG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        wcscpy(data, yin_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        wcscpy(data, yin_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void ekbcimrlCOaJPPiFNPzM_yin()
{
    yinG2B();
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
#ifndef OMITyin
    printLine("Calling yin()...");
    ekbcimrlCOaJPPiFNPzM_yin();
    printLine("Finished yin()");
#endif /* a */
#ifndef OMITIFP
    printLine("Calling IFP()...");
    ekbcimrlCOaJPPiFNPzM_IFP();
    printLine("Finished IFP()");
#endif /* a */
    return 0;
}

#endif
