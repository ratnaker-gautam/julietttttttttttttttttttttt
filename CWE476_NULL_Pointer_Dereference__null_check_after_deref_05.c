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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITzjK

void gYNvEnPtFdOlFXAYjgjy_zjK()
{
    if(staticTrue)
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

#ifndef OMITquS

/* a a a a a a */
static void quS1()
{
    if(staticFalse)
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
static void quS2()
{
    if(staticTrue)
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

void gYNvEnPtFdOlFXAYjgjy_quS()
{
    quS1();
    quS2();
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
#ifndef OMITquS
    printLine("Calling quS()...");
    gYNvEnPtFdOlFXAYjgjy_quS();
    printLine("Finished quS()");
#endif /* a */
#ifndef OMITzjK
    printLine("Calling zjK()...");
    gYNvEnPtFdOlFXAYjgjy_zjK();
    printLine("Finished zjK()");
#endif /* a */
    return 0;
}

#endif
