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
#define feZ_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define jhb_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define feZ_OS_COMMAND L"ls -la"
#define jhb_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define SYSTEM _wsystem
#else /* a a */
#define SYSTEM system
#endif

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a
 */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITfeZ

void UrELBrCHaiGtPzOergQE_feZ()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
        /* a a a a a a a */
        wcscpy(data, feZ_OS_COMMAND);
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

#ifndef OMITjhb

/* a a a a a a a a a a a a */
static void jhbG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        wcscpy(data, jhb_OS_COMMAND);
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
static void jhbG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
        /* a a a a a */
        wcscpy(data, jhb_OS_COMMAND);
    }
    /* a a a a a a a a a a a a a a
     * a a a a a a a a a */
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

void UrELBrCHaiGtPzOergQE_jhb()
{
    jhbG2B1();
    jhbG2B2();
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
#ifndef OMITjhb
    printLine("Calling jhb()...");
    UrELBrCHaiGtPzOergQE_jhb();
    printLine("Finished jhb()");
#endif /* a */
#ifndef OMITfeZ
    printLine("Calling feZ()...");
    UrELBrCHaiGtPzOergQE_feZ();
    printLine("Finished feZ()");
#endif /* a */
    return 0;
}

#endif
