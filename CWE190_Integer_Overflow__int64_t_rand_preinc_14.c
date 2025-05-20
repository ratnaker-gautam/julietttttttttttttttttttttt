/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITSko

void uRnrmlYIeUtkAuYhdzlR_Sko()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITsaI

/* a a a a a a a a a a a a a */
static void saIB2G1()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a */
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void saIB2G2()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        /* a a a a a a */
        data = (int64_t)RAND64();
    }
    if(globalFive==5)
    {
        /* a a a a a a a a a a */
        if (data < LLONG_MAX)
        {
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* a a a a a a a a a a a a a */
static void saIG2B1()
{
    int64_t data;
    data = 0LL;
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void saIG2B2()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalFive==5)
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}

void uRnrmlYIeUtkAuYhdzlR_saI()
{
    saIB2G1();
    saIB2G2();
    saIG2B1();
    saIG2B2();
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
#ifndef OMITsaI
    printLine("Calling saI()...");
    uRnrmlYIeUtkAuYhdzlR_saI();
    printLine("Finished saI()");
#endif /* a */
#ifndef OMITSko
    printLine("Calling Sko()...");
    uRnrmlYIeUtkAuYhdzlR_Sko();
    printLine("Finished Sko()");
#endif /* a */
    return 0;
}

#endif
