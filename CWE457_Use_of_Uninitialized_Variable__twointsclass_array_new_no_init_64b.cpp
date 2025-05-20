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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace nyxtfWsDHqfnBoheIzEG_new_no_init_64
{

#ifndef OMITmrT

void mrTSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    /* a a a a */
    TwoIntsClass * data = (*dataPtr);
    /* a a a a a a a */
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}

#endif /* a */

#ifndef OMITUZT

/* a a a a a a a */
void UZTG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    /* a a a a */
    TwoIntsClass * data = (*dataPtr);
    /* a a a a a a a */
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}

/* a a a a a a a */
void UZTB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    /* a a a a */
    TwoIntsClass * data = (*dataPtr);
    /* a a a a a a a */
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}

#endif /* a */

} /* a a */
