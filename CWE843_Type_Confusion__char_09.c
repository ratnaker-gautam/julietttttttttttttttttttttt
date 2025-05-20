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

#ifndef OMITkEM

void kMYVBMcEIqTZvLUiFZfM_kEM()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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

#ifndef OMITPcT

/* a a a a a a a a a a a a */
static void PcTG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
static void PcTG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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

void kMYVBMcEIqTZvLUiFZfM_PcT()
{
    PcTG2B1();
    PcTG2B2();
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
#ifndef OMITPcT
    printLine("Calling PcT()...");
    kMYVBMcEIqTZvLUiFZfM_PcT();
    printLine("Finished PcT()");
#endif /* a */
#ifndef OMITkEM
    printLine("Calling kEM()...");
    kMYVBMcEIqTZvLUiFZfM_kEM();
    printLine("Finished kEM()");
#endif /* a */
    return 0;
}

#endif
