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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITrtW

void luIsqSISMLZTHnUoAkty_rtW()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(staticTrue)
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

#ifndef OMITIxf

/* a a a a a a a a a a a a a */
static void IxfB2G1()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(staticFalse)
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
static void IxfB2G2()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a */
        data = (short)RAND32();
    }
    if(staticTrue)
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
static void IxfG2B1()
{
    short data;
    data = 0;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticTrue)
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
static void IxfG2B2()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticTrue)
    {
        if(data > 0) /* a a a a a a */
        {
            /* a a a a*a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

void luIsqSISMLZTHnUoAkty_Ixf()
{
    IxfB2G1();
    IxfB2G2();
    IxfG2B1();
    IxfG2B2();
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
#ifndef OMITIxf
    printLine("Calling Ixf()...");
    luIsqSISMLZTHnUoAkty_Ixf();
    printLine("Finished Ixf()");
#endif /* a */
#ifndef OMITrtW
    printLine("Calling rtW()...");
    luIsqSISMLZTHnUoAkty_rtW();
    printLine("Finished rtW()");
#endif /* a */
    return 0;
}

#endif
