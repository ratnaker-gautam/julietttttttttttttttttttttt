/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITbRh

static void bRhSink(int64_t data)
{
    {
        /* a a a a a a a a */
        --data;
        int64_t result = data;
        printLongLongLine(result);
    }
}

void VetRqtrOrEmVLloUKSel_bRh()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a a a a a */
    data = LLONG_MIN;
    bRhSink(data);
}

#endif /* a */

#ifndef OMITjaU

/* a a a a a a a */
static void jaUG2BSink(int64_t data)
{
    {
        /* a a a a a a a a */
        --data;
        int64_t result = data;
        printLongLongLine(result);
    }
}

static void jaUG2B()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a a a a a a a a a a */
    data = -2;
    jaUG2BSink(data);
}

/* a a a a a a a */
static void jaUB2GSink(int64_t data)
{
    /* a a a a a a a a a a */
    if (data > LLONG_MIN)
    {
        --data;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

static void jaUB2G()
{
    int64_t data;
    data = 0LL;
    /* a a a a a a a a a a */
    data = LLONG_MIN;
    jaUB2GSink(data);
}

void VetRqtrOrEmVLloUKSel_jaU()
{
    jaUB2G();
    jaUG2B();
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
#ifndef OMITjaU
    printLine("Calling jaU()...");
    VetRqtrOrEmVLloUKSel_jaU();
    printLine("Finished jaU()");
#endif /* a */
#ifndef OMITbRh
    printLine("Calling bRh()...");
    VetRqtrOrEmVLloUKSel_bRh();
    printLine("Finished bRh()");
#endif /* a */
    return 0;
}

#endif
