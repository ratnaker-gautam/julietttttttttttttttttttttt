/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITjgY

void uWfHYNjiHGlPGAFjOLRI_jgY()
{
    if(globalFive==5)
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
            /* a a a a a a a a a a a a a */
            if (intPointer != NULL)
            {
                *intPointer = 10;
            }
            printIntLine(*intPointer);
        }
    }
}

#endif /* a */

#ifndef OMITpJr

/* a a a a a a */
static void pJr1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
            /* a a a a a a a a a a a a a a a a */
            *intPointer = 10;
            printIntLine(*intPointer);
        }
    }
}

/* a a a a a a a a */
static void pJr2()
{
    if(globalFive==5)
    {
        {
            int *intPointer = NULL;
            intPointer = (int *)malloc(sizeof(int));
            *intPointer = 5;
            printIntLine(*intPointer);
            /* a a a a a a a a a a a a a a a a */
            *intPointer = 10;
            printIntLine(*intPointer);
        }
    }
}

void uWfHYNjiHGlPGAFjOLRI_pJr()
{
    pJr1();
    pJr2();
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
#ifndef OMITpJr
    printLine("Calling pJr()...");
    uWfHYNjiHGlPGAFjOLRI_pJr();
    printLine("Finished pJr()");
#endif /* a */
#ifndef OMITjgY
    printLine("Calling jgY()...");
    uWfHYNjiHGlPGAFjOLRI_jgY();
    printLine("Finished jgY()");
#endif /* a */
    return 0;
}

#endif
