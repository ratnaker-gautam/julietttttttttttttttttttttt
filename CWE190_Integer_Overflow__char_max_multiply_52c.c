/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITLBW

void fZOyIkquHzLpiolSDNXo_LBWSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a*a a a a a a */
        char result = data * 2;
        printHexCharLine(result);
    }
}

#endif /* a */

#ifndef OMITaXw

/* a a a a a a a */
void fZOyIkquHzLpiolSDNXo_aXwG2BSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a*a a a a a a */
        char result = data * 2;
        printHexCharLine(result);
    }
}

/* a a a a a a a */
void fZOyIkquHzLpiolSDNXo_aXwB2GSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a a a a a a a */
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

#endif /* a */
