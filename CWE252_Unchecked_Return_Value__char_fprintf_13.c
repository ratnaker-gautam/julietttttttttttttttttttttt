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

#ifndef OMITQFj

void rHDJtmEUcOLuHkTaWAiR_QFj()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a */
        fprintf(stdout, "%s\n", "string");
    }
}

#endif /* a */

#ifndef OMITlre

/* a a a a a a */
static void lre1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}

/* a a a a a a a a */
static void lre2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a */
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}

void rHDJtmEUcOLuHkTaWAiR_lre()
{
    lre1();
    lre2();
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
#ifndef OMITlre
    printLine("Calling lre()...");
    rHDJtmEUcOLuHkTaWAiR_lre();
    printLine("Finished lre()");
#endif /* a */
#ifndef OMITQFj
    printLine("Calling QFj()...");
    rHDJtmEUcOLuHkTaWAiR_QFj();
    printLine("Finished QFj()");
#endif /* a */
    return 0;
}

#endif
