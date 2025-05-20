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

#ifndef OMITjKI

void qPxwAecNnHxdRnfkqDab_jKI()
{
    if(1)
    {
        /* a a a a a a a */
        putc((int)'A', stdout);
    }
}

#endif /* a */

#ifndef OMITWuu

/* a a a a a a */
static void Wuu1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}

/* a a a a a a a a */
static void Wuu2()
{
    if(1)
    {
        /* a a a a a */
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}

void qPxwAecNnHxdRnfkqDab_Wuu()
{
    Wuu1();
    Wuu2();
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
#ifndef OMITWuu
    printLine("Calling Wuu()...");
    qPxwAecNnHxdRnfkqDab_Wuu();
    printLine("Finished Wuu()");
#endif /* a */
#ifndef OMITjKI
    printLine("Calling jKI()...");
    qPxwAecNnHxdRnfkqDab_jKI();
    printLine("Finished jKI()");
#endif /* a */
    return 0;
}

#endif
