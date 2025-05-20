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

namespace tSQhzCOrXmkpdwCTaAeW
{

#ifndef OMITzPq

void zPq()
{
    void * data;
    void * &dataRef = data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    {
        void * data = dataRef;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

#endif /* a */

#ifndef OMITwNy

/* a a a a a a a */
static void wNyG2B()
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

void wNy()
{
    wNyG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

using namespace tSQhzCOrXmkpdwCTaAeW; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITwNy
    printLine("Calling wNy()...");
    wNy();
    printLine("Finished wNy()");
#endif /* a */
#ifndef OMITzPq
    printLine("Calling zPq()...");
    zPq();
    printLine("Finished zPq()");
#endif /* a */
    return 0;
}

#endif
