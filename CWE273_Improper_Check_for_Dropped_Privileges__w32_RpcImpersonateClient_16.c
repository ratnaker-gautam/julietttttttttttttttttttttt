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

#ifndef OMITTwy

void AIVgCuqWxcPmHsgTkGkR_Twy()
{
    while(1)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
        break;
    }
}

#endif /* a */

#ifndef OMITrHH

/* a a a a a a a a */
static void rHH1()
{
    while(1)
    {
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

void AIVgCuqWxcPmHsgTkGkR_rHH()
{
    rHH1();
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
#ifndef OMITrHH
    printLine("Calling rHH()...");
    AIVgCuqWxcPmHsgTkGkR_rHH();
    printLine("Finished rHH()");
#endif /* a */
#ifndef OMITTwy
    printLine("Calling Twy()...");
    AIVgCuqWxcPmHsgTkGkR_Twy();
    printLine("Finished Twy()");
#endif /* a */
    return 0;
}

#endif
