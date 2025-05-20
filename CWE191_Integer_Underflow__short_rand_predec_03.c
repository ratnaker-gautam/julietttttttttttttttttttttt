/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITKsS

void aEccdwrPCBWIyfJgDNCU_KsS()
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
        {
            /* a a a a a a a a */
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITKNK

/* a a a a a a a a a a a a a */
static void KNKB2G1()
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
        /* a a a a a a a a a a */
        if (data > SHRT_MIN)
        {
            --data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void KNKB2G2()
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
        /* a a a a a a a a a a */
        if (data > SHRT_MIN)
        {
            --data;
            short result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void KNKG2B1()
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
        data = -2;
    }
    if(5==5)
    {
        {
            /* a a a a a a a a */
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void KNKG2B2()
{
    short data;
    data = 0;
    if(5==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(5==5)
    {
        {
            /* a a a a a a a a */
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}

void aEccdwrPCBWIyfJgDNCU_KNK()
{
    KNKB2G1();
    KNKB2G2();
    KNKG2B1();
    KNKG2B2();
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
#ifndef OMITKNK
    printLine("Calling KNK()...");
    aEccdwrPCBWIyfJgDNCU_KNK();
    printLine("Finished KNK()");
#endif /* a */
#ifndef OMITKsS
    printLine("Calling KsS()...");
    aEccdwrPCBWIyfJgDNCU_KsS();
    printLine("Finished KsS()");
#endif /* a */
    return 0;
}

#endif
