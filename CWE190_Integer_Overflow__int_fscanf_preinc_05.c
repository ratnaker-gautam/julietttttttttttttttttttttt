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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITFdP

void GOfyfzpRjAQEmgtomTZe_FdP()
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
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITuhH

/* a a a a a a a a a a a a a */
static void uhHB2G1()
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
static void uhHB2G2()
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
static void uhHG2B1()
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
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void uhHG2B2()
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
            /* a a a a a a a a */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}

void GOfyfzpRjAQEmgtomTZe_uhH()
{
    uhHB2G1();
    uhHB2G2();
    uhHG2B1();
    uhHG2B2();
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
#ifndef OMITuhH
    printLine("Calling uhH()...");
    GOfyfzpRjAQEmgtomTZe_uhH();
    printLine("Finished uhH()");
#endif /* a */
#ifndef OMITFdP
    printLine("Calling FdP()...");
    GOfyfzpRjAQEmgtomTZe_FdP();
    printLine("Finished FdP()");
#endif /* a */
    return 0;
}

#endif
