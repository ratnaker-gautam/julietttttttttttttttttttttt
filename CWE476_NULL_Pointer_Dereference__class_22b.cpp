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
 *    a a a a a a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace pmeIfXsoGblMPEveNDgB_22
{

#ifndef OMITtZo

/* a a a a a a a a a a a a a a a a a a
a a a a a a a a a a */
extern int tZoGlobal;

void tZoSink(TwoIntsClass * data)
{
    if(tZoGlobal)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a a a a a a a a a */
        delete data;
    }
}

#endif /* a */

#ifndef OMITyre

/* a a a a a a a a a a a a a a a a a a
a a a a a a a a a */
extern int yreB2G1Global;
extern int yreB2G2Global;
extern int yreG2B1Global;

/* a a a a a a a a a a a a a a a a */
void yreB2G1Sink(TwoIntsClass * data)
{
    if(yreB2G1Global)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a a a a */
void yreB2G2Sink(TwoIntsClass * data)
{
    if(yreB2G2Global)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a */
void yreG2B1Sink(TwoIntsClass * data)
{
    if(yreG2B1Global)
    {
        /* a a a a a a a a a a */
        printIntLine(data->intOne);
        /* a a a a a a a a a a a a a a a a a a a a */
        delete data;
    }
}

#endif /* a */

} /* a a */
