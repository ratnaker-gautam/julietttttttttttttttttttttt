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
#define PUTS puts
#else
#define PUTS puts
#endif

#ifndef OMITfNz

void cIASoGQAsrwdlXwMsNYK_fNz()
{
    if(1)
    {
        /* a a a a a a a */
        PUTS("string");
    }
}

#endif /* a */

#ifndef OMITGXw

/* a a a a a a */
static void GXw1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}

/* a a a a a a a a */
static void GXw2()
{
    if(1)
    {
        /* a a a a a */
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}

void cIASoGQAsrwdlXwMsNYK_GXw()
{
    GXw1();
    GXw2();
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
#ifndef OMITGXw
    printLine("Calling GXw()...");
    cIASoGQAsrwdlXwMsNYK_GXw();
    printLine("Finished GXw()");
#endif /* a */
#ifndef OMITfNz
    printLine("Calling fNz()...");
    cIASoGQAsrwdlXwMsNYK_fNz();
    printLine("Finished fNz()");
#endif /* a */
    return 0;
}

#endif
