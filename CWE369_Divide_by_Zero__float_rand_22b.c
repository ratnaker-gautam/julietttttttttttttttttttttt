/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a a a a a
 * a a a a a a
 * a
 *    a a a a a a a a a
 *    a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

#ifndef OMITMUo

/* a a a a a a a a a a a a a a */
extern int edOPzIERdwNDzYMndvbs_rand_22_MUoGlobal;

void edOPzIERdwNDzYMndvbs_rand_22_MUoSink(float data)
{
    if(edOPzIERdwNDzYMndvbs_rand_22_MUoGlobal)
    {
        {
            /* a a a a a a */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITWnD

/* a a a a a a a a a a a a a a */
extern int edOPzIERdwNDzYMndvbs_rand_22_WnDB2G1Global;
extern int edOPzIERdwNDzYMndvbs_rand_22_WnDB2G2Global;
extern int edOPzIERdwNDzYMndvbs_rand_22_WnDG2BGlobal;

/* a a a a a a a a a a a a a a a a */
void edOPzIERdwNDzYMndvbs_rand_22_WnDB2G1Sink(float data)
{
    if(edOPzIERdwNDzYMndvbs_rand_22_WnDB2G1Global)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a a a a a a a a a a a a */
void edOPzIERdwNDzYMndvbs_rand_22_WnDB2G2Sink(float data)
{
    if(edOPzIERdwNDzYMndvbs_rand_22_WnDB2G2Global)
    {
        /* a a a a a a a a a a */
        if(fabs(data) > 0.000001)
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}

/* a a a a a a */
void edOPzIERdwNDzYMndvbs_rand_22_WnDG2BSink(float data)
{
    if(edOPzIERdwNDzYMndvbs_rand_22_WnDG2BGlobal)
    {
        {
            /* a a a a a a */
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}

#endif /* a */
