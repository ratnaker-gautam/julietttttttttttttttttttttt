/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITGEU

void HSkdJbqXyCQjGCPhUXLo_GEU()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        fwprintf(stdout, L"%s\n", L"string");
    }
}

#endif /* a */

#ifndef OMITOSK

/* a a a a a a */
static void OSK1()
{
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}

/* a a a a a a a a */
static void OSK2()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}

void HSkdJbqXyCQjGCPhUXLo_OSK()
{
    OSK1();
    OSK2();
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
#ifndef OMITOSK
    printLine("Calling OSK()...");
    HSkdJbqXyCQjGCPhUXLo_OSK();
    printLine("Finished OSK()");
#endif /* a */
#ifndef OMITGEU
    printLine("Calling GEU()...");
    HSkdJbqXyCQjGCPhUXLo_GEU();
    printLine("Finished GEU()");
#endif /* a */
    return 0;
}

#endif
