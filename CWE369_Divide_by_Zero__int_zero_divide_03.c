/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a
 * a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITqPA

void SUgQBcOWbqnAwoErsJLn_qPA()
{
    int data;
    /* a a */
    data = -1;
    if(5==5)
    {
        /* a a a a a a */
        data = 0;
    }
    if(5==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

#endif /* a */

#ifndef OMITUAN

/* a a a a a a a a a a a a a */
static void UANB2G1()
{
    int data;
    /* a a */
    data = -1;
    if(5==5)
    {
        /* a a a a a a */
        data = 0;
    }
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void UANB2G2()
{
    int data;
    /* a a */
    data = -1;
    if(5==5)
    {
        /* a a a a a a */
        data = 0;
    }
    if(5==5)
    {
        /* a a a a a a */
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a a a a */
static void UANG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(5==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

/* a a a a a a a a a a a a a a */
static void UANG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(5==5)
    {
        /* a a a a a a a a */
        data = 7;
    }
    if(5==5)
    {
        /* a a a a a a */
        printIntLine(100 / data);
    }
}

void SUgQBcOWbqnAwoErsJLn_UAN()
{
    UANB2G1();
    UANB2G2();
    UANG2B1();
    UANG2B2();
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
#ifndef OMITUAN
    printLine("Calling UAN()...");
    SUgQBcOWbqnAwoErsJLn_UAN();
    printLine("Finished UAN()");
#endif /* a */
#ifndef OMITqPA
    printLine("Calling qPA()...");
    SUgQBcOWbqnAwoErsJLn_qPA();
    printLine("Finished qPA()");
#endif /* a */
    return 0;
}

#endif
