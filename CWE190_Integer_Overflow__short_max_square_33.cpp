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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <math.h>

namespace LDBsQCXOgLlYtWJHddZH
{

#ifndef OMITtUy

void tUy()
{
    short data;
    short &dataRef = data;
    data = 0;
    /* a a a a a a a a a a */
    data = SHRT_MAX;
    {
        short data = dataRef;
        {
            /* a a a a*a a a a a a */
            short result = data * data;
            printIntLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITBqg

/* a a a a a a a */
static void BqgG2B()
{
    short data;
    short &dataRef = data;
    data = 0;
    /* a a a a a a a a a a a a a a a */
    data = 2;
    {
        short data = dataRef;
        {
            /* a a a a*a a a a a a */
            short result = data * data;
            printIntLine(result);
        }
    }
}

/* a a a a a a a */
static void BqgB2G()
{
    short data;
    short &dataRef = data;
    data = 0;
    /* a a a a a a a a a a */
    data = SHRT_MAX;
    {
        short data = dataRef;
        /* a a a a a a a a a a */
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

void Bqg()
{
    BqgG2B();
    BqgB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace LDBsQCXOgLlYtWJHddZH; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITBqg
    printLine("Calling Bqg()...");
    Bqg();
    printLine("Finished Bqg()");
#endif /* a */
#ifndef OMITtUy
    printLine("Calling tUy()...");
    tUy();
    printLine("Finished tUy()");
#endif /* a */
    return 0;
}

#endif
