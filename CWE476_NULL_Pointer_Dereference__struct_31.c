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
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITRLu

void VtQAqjdAzJfCxjVCsgld_RLu()
{
    twoIntsStruct * data;
    /* a a a a a a */
    data = NULL;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

#endif /* a */

#ifndef OMITHnV

/* a a a a a a a */
static void HnVG2B()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    /* a a a */
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
    }
}

/* a a a a a a a */
static void HnVB2G()
{
    twoIntsStruct * data;
    /* a a a a a a */
    data = NULL;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
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

void VtQAqjdAzJfCxjVCsgld_HnV()
{
    HnVG2B();
    HnVB2G();
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
#ifndef OMITHnV
    printLine("Calling HnV()...");
    VtQAqjdAzJfCxjVCsgld_HnV();
    printLine("Finished HnV()");
#endif /* a */
#ifndef OMITRLu
    printLine("Calling RLu()...");
    VtQAqjdAzJfCxjVCsgld_RLu();
    printLine("Finished RLu()");
#endif /* a */
    return 0;
}

#endif
