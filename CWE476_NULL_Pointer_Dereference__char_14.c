/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a
 * a a a
 * a
 *    a a a a a a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITSAS

void wFBdaVEvjJEbKqgTMFLx_SAS()
{
    char * data;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

#endif /* a */

#ifndef OMITrMf

/* a a a a a a a a a a a a a */
static void rMfB2G1()
{
    char * data;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void rMfB2G2()
{
    char * data;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalFive==5)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void rMfG2B1()
{
    char * data;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = "rMf";
    }
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

/* a a a a a a a a a a a a a a */
static void rMfG2B2()
{
    char * data;
    if(globalFive==5)
    {
        /* a a a */
        data = "rMf";
    }
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

void wFBdaVEvjJEbKqgTMFLx_rMf()
{
    rMfB2G1();
    rMfB2G2();
    rMfG2B1();
    rMfG2B2();
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
#ifndef OMITrMf
    printLine("Calling rMf()...");
    wFBdaVEvjJEbKqgTMFLx_rMf();
    printLine("Finished rMf()");
#endif /* a */
#ifndef OMITSAS
    printLine("Calling SAS()...");
    wFBdaVEvjJEbKqgTMFLx_SAS();
    printLine("Finished SAS()");
#endif /* a */
    return 0;
}

#endif
