/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITocx

void uXoaVlHmQPsBCAJMRlxh_ocx()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a */
    data = (int64_t)RAND64();
    {
        /* a a a a a a a a a a */
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}

#endif /* a */

#ifndef OMITwDv

/* a a a a a a a */
static void wDvG2B()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a a a a a a a a a a */
    data = -2;
    {
        /* a a a a a a a a a a */
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}

/* a a a a a a a */
static void wDvB2G()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a */
    data = (int64_t)RAND64();
    /* a a a a a a a a a a */
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}

void uXoaVlHmQPsBCAJMRlxh_wDv()
{
    wDvG2B();
    wDvB2G();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITwDv
    printLine("Calling wDv()...");
    uXoaVlHmQPsBCAJMRlxh_wDv();
    printLine("Finished wDv()");
#endif /* a */
#ifndef OMITocx
    printLine("Calling ocx()...");
    uXoaVlHmQPsBCAJMRlxh_ocx();
    printLine("Finished ocx()");
#endif /* a */
    return 0;
}

#endif
