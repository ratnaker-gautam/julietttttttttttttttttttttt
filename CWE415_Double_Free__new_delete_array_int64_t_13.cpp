/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a a a a a
 * a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a a a a a
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace kfZhvzuHdUWoGBMUvbQS
{

#ifndef OMITLIQ

void LIQ()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int64_t[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITDjt

/* a a a a a a a a a a a a a */
static void DjtB2G1()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int64_t[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void DjtB2G2()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int64_t[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void DjtG2B1()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
        /* a a a a a a a a a a a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void DjtG2B2()
{
    int64_t * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int64_t[100];
        /* a a a a a a a a a a a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a */
        delete [] data;
    }
}

void Djt()
{
    DjtB2G1();
    DjtB2G2();
    DjtG2B1();
    DjtG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace kfZhvzuHdUWoGBMUvbQS; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDjt
    printLine("Calling Djt()...");
    Djt();
    printLine("Finished Djt()");
#endif /* a */
#ifndef OMITLIQ
    printLine("Calling LIQ()...");
    LIQ();
    printLine("Finished LIQ()");
#endif /* a */
    return 0;
}

#endif
