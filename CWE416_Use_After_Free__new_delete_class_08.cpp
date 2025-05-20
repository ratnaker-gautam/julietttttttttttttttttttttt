/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

namespace JaohhEqxNJuuEfLLGxDP
{

#ifndef OMITovW

void ovW()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITaHd

/* a a a a a a a a a a a a a */
static void aHdB2G1()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void aHdB2G2()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a a a a a a a a */
        delete data;
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void aHdG2B1()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a */
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void aHdG2B2()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* a a a a a a a a */
    }
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a */
    }
}

void aHd()
{
    aHdB2G1();
    aHdB2G2();
    aHdG2B1();
    aHdG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace JaohhEqxNJuuEfLLGxDP; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITaHd
    printLine("Calling aHd()...");
    aHd();
    printLine("Finished aHd()");
#endif /* a */
#ifndef OMITovW
    printLine("Calling ovW()...");
    ovW();
    printLine("Finished ovW()");
#endif /* a */
    return 0;
}

#endif
