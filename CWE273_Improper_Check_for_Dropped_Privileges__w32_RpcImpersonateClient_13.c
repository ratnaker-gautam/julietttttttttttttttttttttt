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

#ifndef OMITEvf

void IWDnmtteGAPoUTTsHwWI_Evf()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITxLI

/* a a a a a a */
static void xLI1()
{
    if(GLOBAL_CONST_FIVE!=5)
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
static void xLI2()
{
    if(GLOBAL_CONST_FIVE==5)
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

void IWDnmtteGAPoUTTsHwWI_xLI()
{
    xLI1();
    xLI2();
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
#ifndef OMITxLI
    printLine("Calling xLI()...");
    IWDnmtteGAPoUTTsHwWI_xLI();
    printLine("Finished xLI()");
#endif /* a */
#ifndef OMITEvf
    printLine("Calling Evf()...");
    IWDnmtteGAPoUTTsHwWI_Evf();
    printLine("Finished Evf()");
#endif /* a */
    return 0;
}

#endif
