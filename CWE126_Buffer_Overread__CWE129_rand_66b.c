/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITzAU

void bTxUedxyZBobqXozNXUP_zAUSink(int dataArray[])
{
    /* a a a a a */
    int data = dataArray[2];
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}

#endif /* a */

#ifndef OMITPKU

/* a a a a a a a */
void bTxUedxyZBobqXozNXUP_PKUG2BSink(int dataArray[])
{
    int data = dataArray[2];
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a a */
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}

/* a a a a a a a */
void bTxUedxyZBobqXozNXUP_PKUB2GSink(int dataArray[])
{
    int data = dataArray[2];
    {
        int buffer[10] = { 0 };
        /* a a a a a a a a a a a */
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}

#endif /* a */
