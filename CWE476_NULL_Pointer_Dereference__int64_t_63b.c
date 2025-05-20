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
 * a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITHEF

void NzStDaUAFnADHMUdAmEL_HEFSink(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    /* a a a a a a a a a a */
    printLongLongLine(*data);
}

#endif /* a */

#ifndef OMITUVP

/* a a a a a a a */
void NzStDaUAFnADHMUdAmEL_UVPG2BSink(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    /* a a a a a a a a a a */
    printLongLongLine(*data);
}

/* a a a a a a a */
void NzStDaUAFnADHMUdAmEL_UVPB2GSink(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    /* a a a a a a a a a */
    if (data != NULL)
    {
        printLongLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}

#endif /* a */
