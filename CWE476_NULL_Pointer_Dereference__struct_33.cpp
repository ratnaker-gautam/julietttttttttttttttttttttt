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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace wSDEqLwszRPUFzWuypsu
{

#ifndef OMITAHh

void AHh()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    /* a a a a a a */
    data = NULL;
    {
        twoIntsStruct * data = dataRef;
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

#endif /* a */

#ifndef OMITQue

/* a a a a a a a */
static void QueG2B()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    twoIntsStruct * &dataRef = data;
    /* a a a */
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    {
        twoIntsStruct * data = dataRef;
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

/* a a a a a a a */
static void QueB2G()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    /* a a a a a a */
    data = NULL;
    {
        twoIntsStruct * data = dataRef;
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

void Que()
{
    QueG2B();
    QueB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace wSDEqLwszRPUFzWuypsu; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITQue
    printLine("Calling Que()...");
    Que();
    printLine("Finished Que()");
#endif /* a */
#ifndef OMITAHh
    printLine("Calling AHh()...");
    AHh();
    printLine("Finished AHh()");
#endif /* a */
    return 0;
}

#endif
