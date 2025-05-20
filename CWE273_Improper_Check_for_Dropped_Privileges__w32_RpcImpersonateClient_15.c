/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#include <rpcdce.h>
# pragma comment(lib, "rpcrt4")

#ifndef OMITVer

void dweGVHSmgwbsgzdTTGfo_Ver()
{
    switch(6)
    {
    case 6:
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITodI

/* a a a a a a */
static void odI1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        /* a a a a a a a a a */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        break;
    }
}

/* a a a a a a a */
static void odI2()
{
    switch(6)
    {
    case 6:
        /* a a a a a a a a a */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void dweGVHSmgwbsgzdTTGfo_odI()
{
    odI1();
    odI2();
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
#ifndef OMITodI
    printLine("Calling odI()...");
    dweGVHSmgwbsgzdTTGfo_odI();
    printLine("Finished odI()");
#endif /* a */
#ifndef OMITVer
    printLine("Calling Ver()...");
    dweGVHSmgwbsgzdTTGfo_Ver();
    printLine("Finished Ver()");
#endif /* a */
    return 0;
}

#endif
