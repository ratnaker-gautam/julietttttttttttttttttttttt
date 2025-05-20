/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITccr

void UaaDwnErzjLQgHbpuYKA_ccr()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalTrue)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

#endif /* a */

#ifndef OMITLtT

/* a a a a a a a a a a a a a */
static void LtTB2G1()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalTrue)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalFalse)
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
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void LtTB2G2()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalTrue)
    {
        /* a a a a a */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void LtTG2B1()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalFalse)
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
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void LtTG2B2()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalTrue)
    {
        /* a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        /* a a a a a a a */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}

void UaaDwnErzjLQgHbpuYKA_LtT()
{
    LtTB2G1();
    LtTB2G2();
    LtTG2B1();
    LtTG2B2();
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
#ifndef OMITLtT
    printLine("Calling LtT()...");
    UaaDwnErzjLQgHbpuYKA_LtT();
    printLine("Finished LtT()");
#endif /* a */
#ifndef OMITccr
    printLine("Calling ccr()...");
    UaaDwnErzjLQgHbpuYKA_ccr();
    printLine("Finished ccr()");
#endif /* a */
    return 0;
}

#endif
