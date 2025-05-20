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

#ifndef OMITjne

void ttLDTnmQirMfvshEoWQm_jne()
{
    if(globalReturnsTrue())
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITLKH

/* a a a a a a */
static void LKH1()
{
    if(globalReturnsFalse())
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
static void LKH2()
{
    if(globalReturnsTrue())
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

void ttLDTnmQirMfvshEoWQm_LKH()
{
    LKH1();
    LKH2();
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
#ifndef OMITLKH
    printLine("Calling LKH()...");
    ttLDTnmQirMfvshEoWQm_LKH();
    printLine("Finished LKH()");
#endif /* a */
#ifndef OMITjne
    printLine("Calling jne()...");
    ttLDTnmQirMfvshEoWQm_jne();
    printLine("Finished jne()");
#endif /* a */
    return 0;
}

#endif
