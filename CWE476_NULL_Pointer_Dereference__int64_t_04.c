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

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITIDA

void zmBCcCBWMwmbxWYvAelq_IDA()
{
    int64_t * data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

#endif /* a */

#ifndef OMITxvz

/* a a a a a a a a a a a a a */
static void xvzB2G1()
{
    int64_t * data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FALSE)
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
static void xvzB2G2()
{
    int64_t * data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_TRUE)
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
static void xvzG2B1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

/* a a a a a a a a a a a a a a */
static void xvzG2B2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(STATIC_CONST_TRUE)
    {
        /* a a a */
        {
            data = &tmpData;
        }
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

void zmBCcCBWMwmbxWYvAelq_xvz()
{
    xvzB2G1();
    xvzB2G2();
    xvzG2B1();
    xvzG2B2();
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
#ifndef OMITxvz
    printLine("Calling xvz()...");
    zmBCcCBWMwmbxWYvAelq_xvz();
    printLine("Finished xvz()");
#endif /* a */
#ifndef OMITIDA
    printLine("Calling IDA()...");
    zmBCcCBWMwmbxWYvAelq_IDA();
    printLine("Finished IDA()");
#endif /* a */
    return 0;
}

#endif
