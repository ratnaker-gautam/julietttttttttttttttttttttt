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

#ifndef OMITPoF

void kYSZoICFBtdVdWnXkSST_PoF()
{
    if(5==5)
    {
        /* a a a a a a a */
        putwc((wchar_t)L'A', stdout);
    }
}

#endif /* a */

#ifndef OMITslz

/* a a a a a a */
static void slz1()
{
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}

/* a a a a a a a a */
static void slz2()
{
    if(5==5)
    {
        /* a a a a a */
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}

void kYSZoICFBtdVdWnXkSST_slz()
{
    slz1();
    slz2();
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
#ifndef OMITslz
    printLine("Calling slz()...");
    kYSZoICFBtdVdWnXkSST_slz();
    printLine("Finished slz()");
#endif /* a */
#ifndef OMITPoF
    printLine("Calling PoF()...");
    kYSZoICFBtdVdWnXkSST_PoF();
    printLine("Finished PoF()");
#endif /* a */
    return 0;
}

#endif
