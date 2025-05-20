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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITaEX

void uLUmTZLKmxdSiNJsyuLY_aEX()
{
    if(staticFive==5)
    {
        /* a a a a a a a */
        fputs("string", stdout);
    }
}

#endif /* a */

#ifndef OMITzev

/* a a a a a a */
static void zev1()
{
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}

/* a a a a a a a a */
static void zev2()
{
    if(staticFive==5)
    {
        /* a a a a a */
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}

void uLUmTZLKmxdSiNJsyuLY_zev()
{
    zev1();
    zev2();
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
#ifndef OMITzev
    printLine("Calling zev()...");
    uLUmTZLKmxdSiNJsyuLY_zev();
    printLine("Finished zev()");
#endif /* a */
#ifndef OMITaEX
    printLine("Calling aEX()...");
    uLUmTZLKmxdSiNJsyuLY_aEX();
    printLine("Finished aEX()");
#endif /* a */
    return 0;
}

#endif
