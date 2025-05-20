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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITYwl

void PakWhsSSraWoNXmEWkWy_Ywl()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a */
            short shortBuffer = 8;
            data = &shortBuffer;
        }
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

#endif /* a */

#ifndef OMITMnv

/* a a a a a a a a a a a a
 * a a a a a */
static void MnvG2B()
{
    void * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
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

void PakWhsSSraWoNXmEWkWy_Mnv()
{
    MnvG2B();
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
#ifndef OMITMnv
    printLine("Calling Mnv()...");
    PakWhsSSraWoNXmEWkWy_Mnv();
    printLine("Finished Mnv()");
#endif /* a */
#ifndef OMITYwl
    printLine("Calling Ywl()...");
    PakWhsSSraWoNXmEWkWy_Ywl();
    printLine("Finished Ywl()");
#endif /* a */
    return 0;
}

#endif
