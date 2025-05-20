/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a
 * a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITvYU

void TSdpeUwitAQoGACyZkvr_vYU()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        /* a a a a a a */
        data = (int *)ALLOCA(10);
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}

#endif /* a */

#ifndef OMITsuy

/* a a a a a a a a a a a a */
static void suyG2B1()
{
    int * data;
    data = NULL;
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a */
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}

/* a a a a a a a a a a a a a a */
static void suyG2B2()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        /* a a a a a */
        data = (int *)ALLOCA(10*sizeof(int));
    }
    {
        int source[10] = {0};
        size_t i;
        /* a a a a a a a a a a a a a a */
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}

void TSdpeUwitAQoGACyZkvr_suy()
{
    suyG2B1();
    suyG2B2();
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
#ifndef OMITsuy
    printLine("Calling suy()...");
    TSdpeUwitAQoGACyZkvr_suy();
    printLine("Finished suy()");
#endif /* a */
#ifndef OMITvYU
    printLine("Calling vYU()...");
    TSdpeUwitAQoGACyZkvr_vYU();
    printLine("Finished vYU()");
#endif /* a */
    return 0;
}

#endif
