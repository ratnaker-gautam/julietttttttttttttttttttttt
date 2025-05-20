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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITvgl

void ZPpXLRkqeqGtbPvSBSxL_vgl()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(staticReturnsTrue())
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITlLu

/* a a a a a a a a a a a a a */
static void lLuB2G1()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a a a a a a a */
static void lLuB2G2()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(staticReturnsTrue())
    {
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
}

/* a a a a a a a a a a a a a */
static void lLuG2B1()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(staticReturnsTrue())
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void lLuG2B2()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(staticReturnsTrue())
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

void ZPpXLRkqeqGtbPvSBSxL_lLu()
{
    lLuB2G1();
    lLuB2G2();
    lLuG2B1();
    lLuG2B2();
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
#ifndef OMITlLu
    printLine("Calling lLu()...");
    ZPpXLRkqeqGtbPvSBSxL_lLu();
    printLine("Finished lLu()");
#endif /* a */
#ifndef OMITvgl
    printLine("Calling vgl()...");
    ZPpXLRkqeqGtbPvSBSxL_vgl();
    printLine("Finished vgl()");
#endif /* a */
    return 0;
}

#endif
