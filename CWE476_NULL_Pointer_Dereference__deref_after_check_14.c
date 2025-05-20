/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITgLe

void QHhclEGcDaLXwlzLbXWI_gLe()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a */
            int *intPointer = NULL;
            if (intPointer == NULL)
            {
                printIntLine(*intPointer);
            }
        }
    }
}

#endif /* a */

#ifndef OMITofu

/* a a a a a a */
static void ofu1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a a a a a a a a a */
            int *intPointer = NULL;
            if (intPointer == NULL)
            {
                printLine("pointer is NULL");
            }
        }
    }
}

/* a a a a a a a a */
static void ofu2()
{
    if(globalFive==5)
    {
        {
            /* a a a a a a a a a a a a a a */
            int *intPointer = NULL;
            if (intPointer == NULL)
            {
                printLine("pointer is NULL");
            }
        }
    }
}

void QHhclEGcDaLXwlzLbXWI_ofu()
{
    ofu1();
    ofu2();
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
#ifndef OMITofu
    printLine("Calling ofu()...");
    QHhclEGcDaLXwlzLbXWI_ofu();
    printLine("Finished ofu()");
#endif /* a */
#ifndef OMITgLe
    printLine("Calling gLe()...");
    QHhclEGcDaLXwlzLbXWI_gLe();
    printLine("Finished gLe()");
#endif /* a */
    return 0;
}

#endif
