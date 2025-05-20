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

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITuDz

void vCqnCobfvmbEZslHChUR_uDz()
{
    if(STATIC_CONST_FIVE==5)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITioe

/* a a a a a a */
static void ioe1()
{
    if(STATIC_CONST_FIVE!=5)
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
static void ioe2()
{
    if(STATIC_CONST_FIVE==5)
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

void vCqnCobfvmbEZslHChUR_ioe()
{
    ioe1();
    ioe2();
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
#ifndef OMITioe
    printLine("Calling ioe()...");
    vCqnCobfvmbEZslHChUR_ioe();
    printLine("Finished ioe()");
#endif /* a */
#ifndef OMITuDz
    printLine("Calling uDz()...");
    vCqnCobfvmbEZslHChUR_uDz();
    printLine("Finished uDz()");
#endif /* a */
    return 0;
}

#endif
