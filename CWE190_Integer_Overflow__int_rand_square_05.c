/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITXRd

void FycbMqjSFjENTXlDELHG_XRd()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticTrue)
    {
        {
            /* a a a a*a a a a a a */
            int result = data * data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITkZe

/* a a a a a a a a a a a a a */
static void kZeB2G1()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void kZeB2G2()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticTrue)
    {
        /* a a a a a a a a a a */
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void kZeG2B1()
{
    int data;
    /* a a */
    data = 0;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticTrue)
    {
        {
            /* a a a a*a a a a a a */
            int result = data * data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void kZeG2B2()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticTrue)
    {
        {
            /* a a a a*a a a a a a */
            int result = data * data;
            printIntLine(result);
        }
    }
}

void FycbMqjSFjENTXlDELHG_kZe()
{
    kZeB2G1();
    kZeB2G2();
    kZeG2B1();
    kZeG2B2();
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
#ifndef OMITkZe
    printLine("Calling kZe()...");
    FycbMqjSFjENTXlDELHG_kZe();
    printLine("Finished kZe()");
#endif /* a */
#ifndef OMITXRd
    printLine("Calling XRd()...");
    FycbMqjSFjENTXlDELHG_XRd();
    printLine("Finished XRd()");
#endif /* a */
    return 0;
}

#endif
