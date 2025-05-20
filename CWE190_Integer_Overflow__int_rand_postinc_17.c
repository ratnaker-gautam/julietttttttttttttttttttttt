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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITUaE

void WhCvZEbyoYPUZwABsKgL_UaE()
{
    int i,j;
    int data;
    /* a a */
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* a a a a a a a a */
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITsEq

/* a a a a a a a a a a */
static void sEqB2G()
{
    int i,k;
    int data;
    /* a a */
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    for(k = 0; k < 1; k++)
    {
        /* a a a a a a a a a a */
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a */
static void sEqG2B()
{
    int h,j;
    int data;
    /* a a */
    data = 0;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a a a a a a a a a a */
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* a a a a a a a a */
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}

void WhCvZEbyoYPUZwABsKgL_sEq()
{
    sEqB2G();
    sEqG2B();
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
#ifndef OMITsEq
    printLine("Calling sEq()...");
    WhCvZEbyoYPUZwABsKgL_sEq();
    printLine("Finished sEq()");
#endif /* a */
#ifndef OMITUaE
    printLine("Calling UaE()...");
    WhCvZEbyoYPUZwABsKgL_UaE();
    printLine("Finished UaE()");
#endif /* a */
    return 0;
}

#endif
