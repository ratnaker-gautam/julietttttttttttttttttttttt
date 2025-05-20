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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#include <rpcdce.h>
# pragma comment(lib, "rpcrt4")

#ifndef OMITLZo

void HiGhpHslLWpczknMEiEK_LZo()
{
    if(1)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITFBb

/* a a a a a a */
static void FBb1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

/* a a a a a a a a */
static void FBb2()
{
    if(1)
    {
        /* a a a a a a a a a */
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

void HiGhpHslLWpczknMEiEK_FBb()
{
    FBb1();
    FBb2();
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
#ifndef OMITFBb
    printLine("Calling FBb()...");
    HiGhpHslLWpczknMEiEK_FBb();
    printLine("Finished FBb()");
#endif /* a */
#ifndef OMITLZo
    printLine("Calling LZo()...");
    HiGhpHslLWpczknMEiEK_LZo();
    printLine("Finished LZo()");
#endif /* a */
    return 0;
}

#endif
