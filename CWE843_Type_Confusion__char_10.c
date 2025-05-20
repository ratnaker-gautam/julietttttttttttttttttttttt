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

#ifndef OMITves

void WQhsLZlpsPfcDqpAqtnx_ves()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        {
            /* a a a a a a */
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITDqe

/* a a a a a a a a a a a a */
static void DqeG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalFalse)
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
static void DqeG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalTrue)
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

void WQhsLZlpsPfcDqpAqtnx_Dqe()
{
    DqeG2B1();
    DqeG2B2();
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
#ifndef OMITDqe
    printLine("Calling Dqe()...");
    WQhsLZlpsPfcDqpAqtnx_Dqe();
    printLine("Finished Dqe()");
#endif /* a */
#ifndef OMITves
    printLine("Calling ves()...");
    WQhsLZlpsPfcDqpAqtnx_ves();
    printLine("Finished ves()");
#endif /* a */
    return 0;
}

#endif
