/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITKMn

void IalEdlQbMQmSLshEzdua_KMnSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    /* a a a a */
    unsigned int data = (*dataPtr);
    {
        /* a a a a a a a a */
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

#endif /* a */

#ifndef OMITEMM

/* a a a a a a a */
void IalEdlQbMQmSLshEzdua_EMMG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    /* a a a a */
    unsigned int data = (*dataPtr);
    {
        /* a a a a a a a a */
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

/* a a a a a a a */
void IalEdlQbMQmSLshEzdua_EMMB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    unsigned int * dataPtr = (unsigned int *)dataVoidPtr;
    /* a a a a */
    unsigned int data = (*dataPtr);
    /* a a a a a a a a a a */
    if (data < UINT_MAX)
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

#endif /* a */
