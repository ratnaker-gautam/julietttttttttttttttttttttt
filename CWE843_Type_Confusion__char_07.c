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

/* a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a
 */
static int staticFive = 5;

#ifndef OMITSgT

void wYKsKsdBHZQdbwdfnVsY_SgT()
{
    void * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
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

#ifndef OMITRqY

/* a a a a a a a a a a a a */
static void RqYG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(staticFive!=5)
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
static void RqYG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(staticFive==5)
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

void wYKsKsdBHZQdbwdfnVsY_RqY()
{
    RqYG2B1();
    RqYG2B2();
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
#ifndef OMITRqY
    printLine("Calling RqY()...");
    wYKsKsdBHZQdbwdfnVsY_RqY();
    printLine("Finished RqY()");
#endif /* a */
#ifndef OMITSgT
    printLine("Calling SgT()...");
    wYKsKsdBHZQdbwdfnVsY_SgT();
    printLine("Finished SgT()");
#endif /* a */
    return 0;
}

#endif
