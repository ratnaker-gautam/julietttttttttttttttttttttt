/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
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

#ifndef OMITHZu

void jurDDvtyRtfxsOlFaPhd_HZu()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
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

#ifndef OMITqEd

/* a a a a a a a a a a a a a */
static void qEdB2G1()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
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
static void qEdB2G2()
{
    int data;
    /* a a */
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
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
static void qEdG2B1()
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
static void qEdG2B2()
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

void jurDDvtyRtfxsOlFaPhd_qEd()
{
    qEdB2G1();
    qEdB2G2();
    qEdG2B1();
    qEdG2B2();
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
#ifndef OMITqEd
    printLine("Calling qEd()...");
    jurDDvtyRtfxsOlFaPhd_qEd();
    printLine("Finished qEd()");
#endif /* a */
#ifndef OMITHZu
    printLine("Calling HZu()...");
    jurDDvtyRtfxsOlFaPhd_HZu();
    printLine("Finished HZu()");
#endif /* a */
    return 0;
}

#endif
