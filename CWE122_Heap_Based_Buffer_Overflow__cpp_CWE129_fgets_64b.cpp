/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

namespace XEQuIVkGRHcPqtAspDsz_fgets_64
{

#ifndef OMITZsM

void ZsMSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}

#endif /* a */

#ifndef OMITlOo

/* a a a a a a a */
void lOoG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a a a a a a a
        * a a a a a a a a a a a a */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}

/* a a a a a a a */
void lOoB2GSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    int * dataPtr = (int *)dataVoidPtr;
    /* a a a a */
    int data = (*dataPtr);
    {
        int i;
        int * buffer = new int[10];
        /* a a */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* a a a a a a a a a a a */
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            /* a a a a */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        delete[] buffer;
    }
}

#endif /* a */

} /* a a */
