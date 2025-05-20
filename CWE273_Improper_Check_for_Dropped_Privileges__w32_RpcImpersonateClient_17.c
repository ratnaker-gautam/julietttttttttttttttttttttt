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

#ifndef OMITfPt

void ILapKBVMcxuTtozYOmhT_fPt()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITPlu

/* a a a a a a a a */
static void Plu1()
{
    int k;
    for(k = 0; k < 1; k++)
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

void ILapKBVMcxuTtozYOmhT_Plu()
{
    Plu1();
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
#ifndef OMITPlu
    printLine("Calling Plu()...");
    ILapKBVMcxuTtozYOmhT_Plu();
    printLine("Finished Plu()");
#endif /* a */
#ifndef OMITfPt
    printLine("Calling fPt()...");
    ILapKBVMcxuTtozYOmhT_fPt();
    printLine("Finished fPt()");
#endif /* a */
    return 0;
}

#endif
