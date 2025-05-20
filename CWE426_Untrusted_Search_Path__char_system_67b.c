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
#define BwD_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define qgo_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define BwD_OS_COMMAND "ls -la"
#define qgo_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

typedef struct _szGXcWrQsxbycLnyZnkg__char_system_67_structType
{
    char * structFirst;
} szGXcWrQsxbycLnyZnkg__char_system_67_structType;

#ifndef OMITBwD

void MOmPmbWkQuoeosnrHjQq_BwDSink(szGXcWrQsxbycLnyZnkg__char_system_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITqgo

/* a a a a a a a */
void MOmPmbWkQuoeosnrHjQq_qgoG2BSink(szGXcWrQsxbycLnyZnkg__char_system_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */
