/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITXhv

void pCTfXZbilVmzsgCwZCQW_Xhv()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        {
            /* a a a a a a */
            short shortBuffer = 8;
            data = &shortBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITZEM

/* a a a a a a a a a a a a */
static void ZEMG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

/* a a a a a a a a a a a a a a */
static void ZEMG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalFive==5)
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void pCTfXZbilVmzsgCwZCQW_ZEM()
{
    ZEMG2B1();
    ZEMG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITZEM
    printLine("Calling ZEM()...");
    pCTfXZbilVmzsgCwZCQW_ZEM();
    printLine("Finished ZEM()");
#endif /* a */
#ifndef OMITXhv
    printLine("Calling Xhv()...");
    pCTfXZbilVmzsgCwZCQW_Xhv();
    printLine("Finished Xhv()");
#endif /* a */
    return 0;
}

#endif
