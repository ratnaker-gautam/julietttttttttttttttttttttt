/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITIGP

void ocjtoAVBscMlsjJMcphc_IGPSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    /* a a a a */
    twoIntsStruct * data = (*dataPtr);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

#endif /* a */

#ifndef OMITEoK

/* a a a a a a a */
void ocjtoAVBscMlsjJMcphc_EoKG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    /* a a a a */
    twoIntsStruct * data = (*dataPtr);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

/* a a a a a a a */
void ocjtoAVBscMlsjJMcphc_EoKB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    /* a a a a */
    twoIntsStruct * data = (*dataPtr);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}

#endif /* a */
