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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace vJdSmdkgVKfoQYoMZuSV
{

#ifndef OMITARi

void ARi()
{
    void * data;
    void * &dataRef = data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    {
        void * data = dataRef;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

#endif /* a */

#ifndef OMITHxs

/* a a a a a a a */
static void HxsG2B()
{
    void * data;
    void * &dataRef = data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    {
        void * data = dataRef;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

void Hxs()
{
    HxsG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

using namespace vJdSmdkgVKfoQYoMZuSV; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITHxs
    printLine("Calling Hxs()...");
    Hxs();
    printLine("Finished Hxs()");
#endif /* a */
#ifndef OMITARi
    printLine("Calling ARi()...");
    ARi();
    printLine("Finished ARi()");
#endif /* a */
    return 0;
}

#endif
