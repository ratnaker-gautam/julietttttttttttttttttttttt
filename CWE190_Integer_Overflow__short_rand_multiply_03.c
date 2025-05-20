/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITTZX

void EQUTkAuPwhfQYqPSEdkw_TZX()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(5==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITkgc

/* a a a a a a a a a a a a a */
static void kgcB2G1()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void kgcB2G2()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(5==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data < (SHRT_MAX/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void kgcG2B1()
{
    short data;
    data = 0;
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(5==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void kgcG2B2()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(5==5)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

void EQUTkAuPwhfQYqPSEdkw_kgc()
{
    kgcB2G1();
    kgcB2G2();
    kgcG2B1();
    kgcG2B2();
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
#ifndef OMITkgc
    printLine("Calling kgc()...");
    EQUTkAuPwhfQYqPSEdkw_kgc();
    printLine("Finished kgc()");
#endif /* a */
#ifndef OMITTZX
    printLine("Calling TZX()...");
    EQUTkAuPwhfQYqPSEdkw_TZX();
    printLine("Finished TZX()");
#endif /* a */
    return 0;
}

#endif
