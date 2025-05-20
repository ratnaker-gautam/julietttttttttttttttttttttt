/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a
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

#ifndef OMITzsk

void DMxBVmBqijODHwNCuRlK_zsk()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(staticTrue)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITGMU

/* a a a a a a a a a a a a a */
static void GMUB2G1()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a a */
static void GMUB2G2()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(staticTrue)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (SHRT_MIN/2))
            {
                short result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}

/* a a a a a a a a a a a a a */
static void GMUG2B1()
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
        data = -2;
    }
    if(staticTrue)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void GMUG2B2()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(staticTrue)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            short result = data * 2;
            printIntLine(result);
        }
    }
}

void DMxBVmBqijODHwNCuRlK_GMU()
{
    GMUB2G1();
    GMUB2G2();
    GMUG2B1();
    GMUG2B2();
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
#ifndef OMITGMU
    printLine("Calling GMU()...");
    DMxBVmBqijODHwNCuRlK_GMU();
    printLine("Finished GMU()");
#endif /* a */
#ifndef OMITzsk
    printLine("Calling zsk()...");
    DMxBVmBqijODHwNCuRlK_zsk();
    printLine("Finished zsk()");
#endif /* a */
    return 0;
}

#endif
