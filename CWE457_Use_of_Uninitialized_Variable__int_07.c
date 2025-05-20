/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITNCb

void WcnurQgegBJylJvqpCzu_NCb()
{
    int data;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

#endif /* a */

#ifndef OMITLOm

/* a a a a a a a a a a a a a */
static void LOmB2G1()
{
    int data;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        data = 5;
        printIntLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void LOmB2G2()
{
    int data;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        data = 5;
        printIntLine(data);
    }
}

/* a a a a a a a a a a a a a */
static void LOmG2B1()
{
    int data;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = 5;
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void LOmG2B2()
{
    int data;
    if(staticFive==5)
    {
        /* a a a */
        data = 5;
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

void WcnurQgegBJylJvqpCzu_LOm()
{
    LOmB2G1();
    LOmB2G2();
    LOmG2B1();
    LOmG2B2();
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
#ifndef OMITLOm
    printLine("Calling LOm()...");
    WcnurQgegBJylJvqpCzu_LOm();
    printLine("Finished LOm()");
#endif /* a */
#ifndef OMITNCb
    printLine("Calling NCb()...");
    WcnurQgegBJylJvqpCzu_NCb();
    printLine("Finished NCb()");
#endif /* a */
    return 0;
}

#endif
