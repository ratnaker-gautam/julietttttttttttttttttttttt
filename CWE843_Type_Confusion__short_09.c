/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITJhY

void xxYmnyGinWGVxVTvynIZ_JhY()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a */
            short shortBuffer = 8;
            data = &shortBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITVgk

/* a a a a a a a a a a a a */
static void VgkG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

/* a a a a a a a a a a a a a a */
static void VgkG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void xxYmnyGinWGVxVTvynIZ_Vgk()
{
    VgkG2B1();
    VgkG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITVgk
    printLine("Calling Vgk()...");
    xxYmnyGinWGVxVTvynIZ_Vgk();
    printLine("Finished Vgk()");
#endif /* a */
#ifndef OMITJhY
    printLine("Calling JhY()...");
    xxYmnyGinWGVxVTvynIZ_JhY();
    printLine("Finished JhY()");
#endif /* a */
    return 0;
}

#endif
