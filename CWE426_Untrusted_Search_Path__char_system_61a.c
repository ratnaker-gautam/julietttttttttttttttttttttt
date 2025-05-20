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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define zFH_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define Prr_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define zFH_OS_COMMAND "ls -la"
#define Prr_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM system
#else /* a a */
#define SYSTEM system
#endif

#ifndef OMITzFH

/* a a a */
char * YnHBdexhEWSWDOiqiCbM__char_system_61b_zFHSource(char * data);

void YnHBdexhEWSWDOiqiCbM__char_system_61_zFH()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = YnHBdexhEWSWDOiqiCbM__char_system_61b_zFHSource(data);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

#endif /* a */

#ifndef OMITPrr

/* a a a a a a a */
char * YnHBdexhEWSWDOiqiCbM__char_system_61b_PrrG2BSource(char * data);

static void PrrG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = YnHBdexhEWSWDOiqiCbM__char_system_61b_PrrG2BSource(data);
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void YnHBdexhEWSWDOiqiCbM__char_system_61_Prr()
{
    PrrG2B();
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
#ifndef OMITPrr
    printLine("Calling Prr()...");
    YnHBdexhEWSWDOiqiCbM__char_system_61_Prr();
    printLine("Finished Prr()");
#endif /* a */
#ifndef OMITzFH
    printLine("Calling zFH()...");
    YnHBdexhEWSWDOiqiCbM__char_system_61_zFH();
    printLine("Finished zFH()");
#endif /* a */
    return 0;
}

#endif
