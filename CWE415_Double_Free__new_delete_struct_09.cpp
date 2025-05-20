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
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace YKSLAAmyLDngHOxDUpSA
{

#ifndef OMITTMM

void TMM()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        delete data;
    }
}

#endif /* a */

#ifndef OMITtfh

/* a a a a a a a a a a a a a */
static void tfhB2G1()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(GLOBAL_CONST_FALSE)
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
static void tfhB2G2()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void tfhG2B1()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        /* a a a a a a a a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        delete data;
    }
}

/* a a a a a a a a a a a a a a */
static void tfhG2B2()
{
    twoIntsStruct * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        /* a a a a a a a a a a a a a a */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a */
        delete data;
    }
}

void tfh()
{
    tfhB2G1();
    tfhB2G2();
    tfhG2B1();
    tfhG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace YKSLAAmyLDngHOxDUpSA; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITtfh
    printLine("Calling tfh()...");
    tfh();
    printLine("Finished tfh()");
#endif /* a */
#ifndef OMITTMM
    printLine("Calling TMM()...");
    TMM();
    printLine("Finished TMM()");
#endif /* a */
    return 0;
}

#endif
