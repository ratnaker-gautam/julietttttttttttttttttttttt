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
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a
 *
 * */

#include <inttypes.h>
#include "std_testcase.h"

#ifndef OMITVFk

void wIHWiXnRaeCqozOtEkjf_VFk()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%" SCNd64, &data);
        break;
    }
    while(1)
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data + 1;
            printLongLongLine(result);
        }
        break;
    }
}

#endif /* a */

#ifndef OMITvUR

/* a a a a a a a a a a a a a a a */
static void vURB2G()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* a a a a a a a a a */
        fscanf (stdin, "%" SCNd64, &data);
        break;
    }
    while(1)
    {
        /* a a a a a a a a a a */
        if (data < LLONG_MAX)
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void vURG2B()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* a a a a a a a a a a a a a a a */
        data = 2;
        break;
    }
    while(1)
    {
        {
            /* a a a a a a a a a a */
            int64_t result = data + 1;
            printLongLongLine(result);
        }
        break;
    }
}

void wIHWiXnRaeCqozOtEkjf_vUR()
{
    vURB2G();
    vURG2B();
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
#ifndef OMITvUR
    printLine("Calling vUR()...");
    wIHWiXnRaeCqozOtEkjf_vUR();
    printLine("Finished vUR()");
#endif /* a */
#ifndef OMITVFk
    printLine("Calling VFk()...");
    wIHWiXnRaeCqozOtEkjf_VFk();
    printLine("Finished VFk()");
#endif /* a */
    return 0;
}

#endif
