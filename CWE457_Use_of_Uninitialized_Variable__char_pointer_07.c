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

#ifndef OMITGol

void DCXLMMQmOvoQwmwYRWoA_Gol()
{
    char * data;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITRuA

/* a a a a a a a a a a a a a */
static void RuAB2G1()
{
    char * data;
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
        data = "string";
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void RuAB2G2()
{
    char * data;
    if(staticFive==5)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        data = "string";
        printLine(data);
    }
}

/* a a a a a a a a a a a a a */
static void RuAG2B1()
{
    char * data;
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = "string";
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void RuAG2B2()
{
    char * data;
    if(staticFive==5)
    {
        /* a a a */
        data = "string";
    }
    if(staticFive==5)
    {
        /* a a a a a a a */
        printLine(data);
    }
}

void DCXLMMQmOvoQwmwYRWoA_RuA()
{
    RuAB2G1();
    RuAB2G2();
    RuAG2B1();
    RuAG2B2();
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
#ifndef OMITRuA
    printLine("Calling RuA()...");
    DCXLMMQmOvoQwmwYRWoA_RuA();
    printLine("Finished RuA()");
#endif /* a */
#ifndef OMITGol
    printLine("Calling Gol()...");
    DCXLMMQmOvoQwmwYRWoA_Gol();
    printLine("Finished Gol()");
#endif /* a */
    return 0;
}

#endif
