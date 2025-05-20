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
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITLXV

void GVacJCgmWTzuVnrbDwRh_LXV()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        data = LLONG_MAX;
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
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

#endif /* a */

#ifndef OMITeGt

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void eGtB2G()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        data = LLONG_MAX;
    }
    else
    {
        /* a a a a a a a a a a */
        data = LLONG_MAX;
    }
    if(globalReturnsTrueOrFalse())
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

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void eGtG2B()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
    else
    {
        {
            /* a a a a a a a a */
            ++data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}

void GVacJCgmWTzuVnrbDwRh_eGt()
{
    eGtB2G();
    eGtG2B();
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
#ifndef OMITeGt
    printLine("Calling eGt()...");
    GVacJCgmWTzuVnrbDwRh_eGt();
    printLine("Finished eGt()");
#endif /* a */
#ifndef OMITLXV
    printLine("Calling LXV()...");
    GVacJCgmWTzuVnrbDwRh_LXV();
    printLine("Finished LXV()");
#endif /* a */
    return 0;
}

#endif
