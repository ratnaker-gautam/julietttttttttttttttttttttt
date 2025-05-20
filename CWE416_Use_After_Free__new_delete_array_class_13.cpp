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

namespace WWWorpqWOabhxcxueUmo
{

#ifndef OMITSOW

void SOW()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a a a a a a a a */
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0].intOne);
        /* a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITqHL

/* a a a a a a a a a a a a a */
static void qHLB2G1()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
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
static void qHLB2G2()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
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
static void qHLG2B1()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0].intOne);
        /* a a a a a a a a a a a a */
    }
}

/* a a a a a a a a a a a a a a */
static void qHLG2B2()
{
    TwoIntsClass * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* a a a a a a a a */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        printIntLine(data[0].intOne);
        /* a a a a a a a a a a a a */
    }
}

void qHL()
{
    qHLB2G1();
    qHLB2G2();
    qHLG2B1();
    qHLG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace WWWorpqWOabhxcxueUmo; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITqHL
    printLine("Calling qHL()...");
    qHL();
    printLine("Finished qHL()");
#endif /* a */
#ifndef OMITSOW
    printLine("Calling SOW()...");
    SOW();
    printLine("Finished SOW()");
#endif /* a */
    return 0;
}

#endif
