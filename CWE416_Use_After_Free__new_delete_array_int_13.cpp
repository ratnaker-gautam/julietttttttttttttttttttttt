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
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace GlyASyPtQfczIWXLTJeU
{

#ifndef OMITOIa

void OIa()
{
    int * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0]);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITKPV

/* a a a a a a a a a a a a a */
static void KPVB2G1()
{
    int * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE!=5)
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
static void KPVB2G2()
{
    int * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a */
static void KPVG2B1()
{
    int * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0]);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void KPVG2B2()
{
    int * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0]);
        /* a a a a a a a a a a a a */
    }
}

void KPV()
{
    KPVB2G1();
    KPVB2G2();
    KPVG2B1();
    KPVG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace GlyASyPtQfczIWXLTJeU; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITKPV
    printLine("Calling KPV()...");
    KPV();
    printLine("Finished KPV()");
#endif /* a */
#ifndef OMITOIa
    printLine("Calling OIa()...");
    OIa();
    printLine("Finished OIa()");
#endif /* a */
    return 0;
}

#endif
