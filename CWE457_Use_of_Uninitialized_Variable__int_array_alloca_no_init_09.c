/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITxNG

void UyPrUGTenjqhHYcUQewo_xNG()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}

#endif /* a */

#ifndef OMITdrs

/* a a a a a a a a a a a a a */
static void drsB2G1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void drsB2G2()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void drsG2B1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void drsG2B2()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}

void UyPrUGTenjqhHYcUQewo_drs()
{
    drsB2G1();
    drsB2G2();
    drsG2B1();
    drsG2B2();
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
#ifndef OMITdrs
    printLine("Calling drs()...");
    UyPrUGTenjqhHYcUQewo_drs();
    printLine("Finished drs()");
#endif /* a */
#ifndef OMITxNG
    printLine("Calling xNG()...");
    UyPrUGTenjqhHYcUQewo_xNG();
    printLine("Finished xNG()");
#endif /* a */
    return 0;
}

#endif
