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
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

#ifndef OMITWZl

void nqMtshgADtCAwHCAjOMv_WZlSink(int countArray[])
{
    /* a a a a a */
    int count = countArray[2];
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

#endif /* a */

#ifndef OMITPLe

/* a a a a a a a */
void nqMtshgADtCAwHCAjOMv_PLeG2BSink(int countArray[])
{
    int count = countArray[2];
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

/* a a a a a a a */
void nqMtshgADtCAwHCAjOMv_PLeB2GSink(int countArray[])
{
    int count = countArray[2];
    /* a a a a a a a a a a a a a */
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}

#endif /* a */
