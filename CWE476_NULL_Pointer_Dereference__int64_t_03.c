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

#ifndef OMITzut

void eBCinRRdmGOJSZEGfsAQ_zut()
{
    int64_t * data;
    if(5==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

#endif /* a */

#ifndef OMITJDa

/* a a a a a a a a a a a a a */
static void JDaB2G1()
{
    int64_t * data;
    if(5==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(5!=5)
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
static void JDaB2G2()
{
    int64_t * data;
    if(5==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(5==5)
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
static void JDaG2B1()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(5!=5)
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
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

/* a a a a a a a a a a a a a a */
static void JDaG2B2()
{
    int64_t * data;
    int64_t tmpData = 5LL;
    if(5==5)
    {
        /* a a a */
        {
            data = &tmpData;
        }
    }
    if(5==5)
    {
        /* a a a a a a a a a a */
        printLongLongLine(*data);
    }
}

void eBCinRRdmGOJSZEGfsAQ_JDa()
{
    JDaB2G1();
    JDaB2G2();
    JDaG2B1();
    JDaG2B2();
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
#ifndef OMITJDa
    printLine("Calling JDa()...");
    eBCinRRdmGOJSZEGfsAQ_JDa();
    printLine("Finished JDa()");
#endif /* a */
#ifndef OMITzut
    printLine("Calling zut()...");
    eBCinRRdmGOJSZEGfsAQ_zut();
    printLine("Finished zut()");
#endif /* a */
    return 0;
}

#endif
