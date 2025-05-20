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

#ifndef OMITmQb

void mPsAYfMFpVCDYAClKTQa_mQb()
{
    int data;
    /* a a */
    data = 0;
    if(1)
    {
        /* a a a a a a a a a */
        data = INT_MIN;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            int result = data * 2;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITsuK

/* a a a a a a a a a a a a a */
static void suKB2G1()
{
    int data;
    /* a a */
    data = 0;
    if(1)
    {
        /* a a a a a a a a a */
        data = INT_MIN;
    }
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (INT_MIN/2))
            {
                int result = data * 2;
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
static void suKB2G2()
{
    int data;
    /* a a */
    data = 0;
    if(1)
    {
        /* a a a a a a a a a */
        data = INT_MIN;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a a a a a a a */
            if (data > (INT_MIN/2))
            {
                int result = data * 2;
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
static void suKG2B1()
{
    int data;
    /* a a */
    data = 0;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            int result = data * 2;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void suKG2B2()
{
    int data;
    /* a a */
    data = 0;
    if(1)
    {
        /* a a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(1)
    {
        if(data < 0) /* a a a a a a */
        {
            /* a a a a * a a a a a a */
            int result = data * 2;
            printIntLine(result);
        }
    }
}

void mPsAYfMFpVCDYAClKTQa_suK()
{
    suKB2G1();
    suKB2G2();
    suKG2B1();
    suKG2B2();
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
#ifndef OMITsuK
    printLine("Calling suK()...");
    mPsAYfMFpVCDYAClKTQa_suK();
    printLine("Finished suK()");
#endif /* a */
#ifndef OMITmQb
    printLine("Calling mQb()...");
    mPsAYfMFpVCDYAClKTQa_mQb();
    printLine("Finished mQb()");
#endif /* a */
    return 0;
}

#endif
