/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include <inttypes.h>
#include "std_testcase.h"

#ifndef OMITTDM

void FjoNJPScumkxYWejPHUS_TDM()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalTrue)
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITkry

/* a a a a a a a a a a a a a */
static void kryB2G1()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalFalse)
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
static void kryB2G2()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(globalTrue)
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
static void kryG2B1()
{
    int64_t data;
    data = 0LL;
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(globalTrue)
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void kryG2B2()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        /* a a a a a a a a a a a a a a a */
        data = -2;
    }
    if(globalTrue)
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}

void FjoNJPScumkxYWejPHUS_kry()
{
    kryB2G1();
    kryB2G2();
    kryG2B1();
    kryG2B2();
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
#ifndef OMITkry
    printLine("Calling kry()...");
    FjoNJPScumkxYWejPHUS_kry();
    printLine("Finished kry()");
#endif /* a */
#ifndef OMITTDM
    printLine("Calling TDM()...");
    FjoNJPScumkxYWejPHUS_TDM();
    printLine("Finished TDM()");
#endif /* a */
    return 0;
}

#endif
