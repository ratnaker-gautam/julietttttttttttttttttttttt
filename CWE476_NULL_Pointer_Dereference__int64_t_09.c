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

#ifndef OMITCrT

void WYLkBaIkrQHxpIYxgqZN_CrT()
{
    int64_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

#endif /* a */

#ifndef OMITuSZ

/* a a a a a a a a a a a a a */
static void uSZB2G1()
{
    int64_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void uSZB2G2()
{
    int64_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void uSZG2B1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

/* a a a a a a a a a a a a a a */
static void uSZG2B2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a */
        {
            data = &tmpData;
        }
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

void WYLkBaIkrQHxpIYxgqZN_uSZ()
{
    uSZB2G1();
    uSZB2G2();
    uSZG2B1();
    uSZG2B2();
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
#ifndef OMITuSZ
    printLine("Calling uSZ()...");
    WYLkBaIkrQHxpIYxgqZN_uSZ();
    printLine("Finished uSZ()");
#endif /* a */
#ifndef OMITCrT
    printLine("Calling CrT()...");
    WYLkBaIkrQHxpIYxgqZN_CrT();
    printLine("Finished CrT()");
#endif /* a */
    return 0;
}

#endif
