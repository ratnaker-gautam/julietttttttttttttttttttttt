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
#define yFD_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define tYh_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define yFD_OS_COMMAND L"ls -la"
#define tYh_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM _wsystem
#else /* a a */
#define SYSTEM system
#endif

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITyFD

void DBXjzJsTYJMSjRqzhkka_yFD()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a */
        wcscpy(data, yFD_OS_COMMAND);
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

#ifndef OMITtYh

/* a a a a a a a a a a a a */
static void tYhG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        wcscpy(data, tYh_OS_COMMAND);
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
static void tYhG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a */
        wcscpy(data, tYh_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void DBXjzJsTYJMSjRqzhkka_tYh()
{
    tYhG2B1();
    tYhG2B2();
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
#ifndef OMITtYh
    printLine("Calling tYh()...");
    DBXjzJsTYJMSjRqzhkka_tYh();
    printLine("Finished tYh()");
#endif /* a */
#ifndef OMITyFD
    printLine("Calling yFD()...");
    DBXjzJsTYJMSjRqzhkka_yFD();
    printLine("Finished yFD()");
#endif /* a */
    return 0;
}

#endif
