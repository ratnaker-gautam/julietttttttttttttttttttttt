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
 *    a a a a a a a a a a
 *    a a a a
 * a a a a a a a a
 * */

#include "std_testcase.h"

namespace qpeANbIlFSxUSCFZKJZv
{

#ifndef OMITXcz

void Xcz()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a a a a a a a a a */
        delete data;
    }
}

#endif /* a */

#ifndef OMITfby

/* a a a a a a a a a a a a a */
static void fbyB2G1()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void fbyB2G2()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        /* a a a a a a */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void fbyG2B1()
{
    TwoIntsClass * data;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            /* a a a */
            data = tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a a a a a a a a a */
        delete data;
    }
}

/* a a a a a a a a a a a a a a */
static void fbyG2B2()
{
    TwoIntsClass * data;
    if(globalReturnsTrue())
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            /* a a a */
            data = tmpData;
        }
    }
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a a a a a a a a a */
        delete data;
    }
}

void fby()
{
    fbyB2G1();
    fbyB2G2();
    fbyG2B1();
    fbyG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace qpeANbIlFSxUSCFZKJZv; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITfby
    printLine("Calling fby()...");
    fby();
    printLine("Finished fby()");
#endif /* a */
#ifndef OMITXcz
    printLine("Calling Xcz()...");
    Xcz();
    printLine("Finished Xcz()");
#endif /* a */
    return 0;
}

#endif
