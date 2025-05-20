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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define hri_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define rtU_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define hri_OS_COMMAND "ls -la"
#define rtU_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMIThri

void cCJYxPMeRztADexVqLYM_hriSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITrtU

/* a a a a a a a */
void cCJYxPMeRztADexVqLYM_rtUG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */
