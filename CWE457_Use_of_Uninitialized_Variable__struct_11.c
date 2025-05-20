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

#ifndef OMITgWM

void XnlOhpZcgVpaqLKXZacz_gWM()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

#endif /* a */

#ifndef OMITeFY

/* a a a a a a a a a a a a a */
static void eFYB2G1()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* a a a a a a a a a a a a a a */
static void eFYB2G2()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* a a a a a a a a a a a a a */
static void eFYG2B1()
{
    twoIntsStruct data;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

/* a a a a a a a a a a a a a a */
static void eFYG2B2()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        /* a a a */
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}

void XnlOhpZcgVpaqLKXZacz_eFY()
{
    eFYB2G1();
    eFYB2G2();
    eFYG2B1();
    eFYG2B2();
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
#ifndef OMITeFY
    printLine("Calling eFY()...");
    XnlOhpZcgVpaqLKXZacz_eFY();
    printLine("Finished eFY()");
#endif /* a */
#ifndef OMITgWM
    printLine("Calling gWM()...");
    XnlOhpZcgVpaqLKXZacz_gWM();
    printLine("Finished gWM()");
#endif /* a */
    return 0;
}

#endif
