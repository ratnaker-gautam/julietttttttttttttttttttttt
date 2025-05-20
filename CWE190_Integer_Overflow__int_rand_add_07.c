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
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITcep

void elXhafUThFhGFqJLWIlx_cep()
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
            /* a a a a a a a a a a */
            int result = data + 1;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITvJO

/* a a a a a a a a a a a a a */
static void vJOB2G1()
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
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void vJOB2G2()
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
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void vJOG2B1()
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
            /* a a a a a a a a a a */
            int result = data + 1;
            printIntLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void vJOG2B2()
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
            /* a a a a a a a a a a */
            int result = data + 1;
            printIntLine(result);
        }
    }
}

void elXhafUThFhGFqJLWIlx_vJO()
{
    vJOB2G1();
    vJOB2G2();
    vJOG2B1();
    vJOG2B2();
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
#ifndef OMITvJO
    printLine("Calling vJO()...");
    elXhafUThFhGFqJLWIlx_vJO();
    printLine("Finished vJO()");
#endif /* a */
#ifndef OMITcep
    printLine("Calling cep()...");
    elXhafUThFhGFqJLWIlx_cep();
    printLine("Finished cep()");
#endif /* a */
    return 0;
}

#endif
