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

namespace HFXWnnesfKaxRLabCrja
{

#ifndef OMITEwz

void Ewz()
{
    long * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalTrue)
    {
        /* a a a a a a */
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITWHG

/* a a a a a a a a a a a a a */
static void WHGB2G1()
{
    long * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalFalse)
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
static void WHGB2G2()
{
    long * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
        /* a a a a a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(globalTrue)
    {
        /* a a */
        /* a a a a a a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void WHGG2B1()
{
    long * data;
    /* a a */
    data = NULL;
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
        /* a a a a a a a a a a a a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a */
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void WHGG2B2()
{
    long * data;
    /* a a */
    data = NULL;
    if(globalTrue)
    {
        data = new long[100];
        /* a a a a a a a a a a a a a a a a a a */
    }
    if(globalTrue)
    {
        /* a a a a a a */
        delete [] data;
    }
}

void WHG()
{
    WHGB2G1();
    WHGB2G2();
    WHGG2B1();
    WHGG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace HFXWnnesfKaxRLabCrja; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITWHG
    printLine("Calling WHG()...");
    WHG();
    printLine("Finished WHG()");
#endif /* a */
#ifndef OMITEwz
    printLine("Calling Ewz()...");
    Ewz();
    printLine("Finished Ewz()");
#endif /* a */
    return 0;
}

#endif
