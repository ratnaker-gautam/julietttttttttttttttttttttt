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

#ifndef OMITNxi

void QLDQFhpQJfhpXqqIXdpR_Nxi()
{
    if(globalFive==5)
    {
        /* a a a a a a a */
        fputc((int)'A', stdout);
    }
}

#endif /* a */

#ifndef OMITlpR

/* a a a a a a */
static void lpR1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}

/* a a a a a a a a */
static void lpR2()
{
    if(globalFive==5)
    {
        /* a a a a a */
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}

void QLDQFhpQJfhpXqqIXdpR_lpR()
{
    lpR1();
    lpR2();
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
#ifndef OMITlpR
    printLine("Calling lpR()...");
    QLDQFhpQJfhpXqqIXdpR_lpR();
    printLine("Finished lpR()");
#endif /* a */
#ifndef OMITNxi
    printLine("Calling Nxi()...");
    QLDQFhpQJfhpXqqIXdpR_Nxi();
    printLine("Finished Nxi()");
#endif /* a */
    return 0;
}

#endif
