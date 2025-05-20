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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITzZP

void mjkMaaMYhDfinBZBdzfU_zZP()
{
    int data;
    /* a a */
    data = 0;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITghb

/* a a a a a a a a a a a a a */
static void ghbB2G1()
{
    int data;
    /* a a */
    data = 0;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void ghbB2G2()
{
    int data;
    /* a a */
    data = 0;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    if(staticFive==5)
    {
        /* a a a a a a a a a a */
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void ghbG2B1()
{
    int data;
    /* a a */
    data = 0;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void ghbG2B2()
{
    int data;
    /* a a */
    data = 0;
    if(staticFive==5)
    {
        /* a a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(staticFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

void mjkMaaMYhDfinBZBdzfU_ghb()
{
    ghbB2G1();
    ghbB2G2();
    ghbG2B1();
    ghbG2B2();
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
#ifndef OMITghb
    printLine("Calling ghb()...");
    mjkMaaMYhDfinBZBdzfU_ghb();
    printLine("Finished ghb()");
#endif /* a */
#ifndef OMITzZP
    printLine("Calling zZP()...");
    mjkMaaMYhDfinBZBdzfU_zZP();
    printLine("Finished zZP()");
#endif /* a */
    return 0;
}

#endif
