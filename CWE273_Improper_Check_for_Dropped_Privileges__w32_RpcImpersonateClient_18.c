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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#include <rpcdce.h>
# pragma comment(lib, "rpcrt4")

#ifndef OMITlmS

void PtkRXBVnwRqGNECEKSqk_lmS()
{
    goto sink;
sink:
    RpcImpersonateClient(0);
    /* a a a a a a a */
    /* a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITZDT

/* a a a a a a a a */
static void ZDT1()
{
    goto sink;
sink:
    /* a a a a a a a a a */
    if (RpcImpersonateClient(0) != RPC_S_OK)
    {
        exit(1);
    }
    /* a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
}

void PtkRXBVnwRqGNECEKSqk_ZDT()
{
    ZDT1();
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
#ifndef OMITZDT
    printLine("Calling ZDT()...");
    PtkRXBVnwRqGNECEKSqk_ZDT();
    printLine("Finished ZDT()");
#endif /* a */
#ifndef OMITlmS
    printLine("Calling lmS()...");
    PtkRXBVnwRqGNECEKSqk_lmS();
    printLine("Finished lmS()");
#endif /* a */
    return 0;
}

#endif
