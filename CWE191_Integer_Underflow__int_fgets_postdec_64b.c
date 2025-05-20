/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

#ifndef OMIThMQ

void RIAtjibJpANNARfrlKhG_hMQSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        /* a a a a a a a a */
        data--;
        int result = data;
        printIntLine(result);
    }
}

#endif /* a */

#ifndef OMITmVR

/* a a a a a a a */
void RIAtjibJpANNARfrlKhG_mVRG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        /* a a a a a a a a */
        data--;
        int result = data;
        printIntLine(result);
    }
}

/* a a a a a a a */
void RIAtjibJpANNARfrlKhG_mVRB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    /* a a a a a a a a a a */
    if (data > INT_MIN)
    {
        data--;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

#endif /* a */
