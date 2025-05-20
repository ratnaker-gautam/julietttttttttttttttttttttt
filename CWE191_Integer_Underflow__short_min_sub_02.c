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
 *    a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITrHy

void QZXVXjJRbgXoUPmWpswp_rHy()
{
    short data;
    data = 0;
    if(1)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(1)
    {
        {
            /* a a a a a a a a a a */
            short result = data - 1;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITiqX

/* a a a a a a a a a a a a a */
static void iqXB2G1()
{
    short data;
    data = 0;
    if(1)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void iqXB2G2()
{
    short data;
    data = 0;
    if(1)
    {
        /* a a a a a a a a a a */
        data = SHRT_MIN;
    }
    if(1)
    {
        /* a a a a a a a a a a */
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void iqXG2B1()
{
    short data;
    data = 0;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        {
            /* a a a a a a a a a a */
            short result = data - 1;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void iqXG2B2()
{
    short data;
    data = 0;
    if(1)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        {
            /* a a a a a a a a a a */
            short result = data - 1;
            printIntLine(result);
        }
    }
}

void QZXVXjJRbgXoUPmWpswp_iqX()
{
    iqXB2G1();
    iqXB2G2();
    iqXG2B1();
    iqXG2B2();
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
#ifndef OMITiqX
    printLine("Calling iqX()...");
    QZXVXjJRbgXoUPmWpswp_iqX();
    printLine("Finished iqX()");
#endif /* a */
#ifndef OMITrHy
    printLine("Calling rHy()...");
    QZXVXjJRbgXoUPmWpswp_rHy();
    printLine("Finished rHy()");
#endif /* a */
    return 0;
}

#endif
