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

#ifdef _WIN32
#define PUTS _putws
#else
#define PUTS puts
#endif

#ifndef OMITLbl

void OdhRqrRsutrgKjhaPyqY_Lbl()
{
    if(1)
    {
        /* a a a a a a a */
        PUTS(L"string");
    }
}

#endif /* a */

#ifndef OMITfEd

/* a a a a a a */
static void fEd1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}

/* a a a a a a a a */
static void fEd2()
{
    if(1)
    {
        /* a a a a a */
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}

void OdhRqrRsutrgKjhaPyqY_fEd()
{
    fEd1();
    fEd2();
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
#ifndef OMITfEd
    printLine("Calling fEd()...");
    OdhRqrRsutrgKjhaPyqY_fEd();
    printLine("Finished fEd()");
#endif /* a */
#ifndef OMITLbl
    printLine("Calling Lbl()...");
    OdhRqrRsutrgKjhaPyqY_Lbl();
    printLine("Finished Lbl()");
#endif /* a */
    return 0;
}

#endif
