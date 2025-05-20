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
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITnTK

void MmNILsSfxxmeNzwCAeSu_nTK()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

#endif /* a */

#ifndef OMITykJ

/* a a a a a a a a a a a a a */
static void ykJB2G1()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_FALSE)
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
static void ykJB2G2()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        data = 5;
        printIntLine(data);
    }
}

/* a a a a a a a a a a a a a */
static void ykJG2B1()
{
    int data;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void ykJG2B2()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        /* a a a */
        data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a */
        printIntLine(data);
    }
}

void MmNILsSfxxmeNzwCAeSu_ykJ()
{
    ykJB2G1();
    ykJB2G2();
    ykJG2B1();
    ykJG2B2();
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
#ifndef OMITykJ
    printLine("Calling ykJ()...");
    MmNILsSfxxmeNzwCAeSu_ykJ();
    printLine("Finished ykJ()");
#endif /* a */
#ifndef OMITnTK
    printLine("Calling nTK()...");
    MmNILsSfxxmeNzwCAeSu_nTK();
    printLine("Finished nTK()");
#endif /* a */
    return 0;
}

#endif
