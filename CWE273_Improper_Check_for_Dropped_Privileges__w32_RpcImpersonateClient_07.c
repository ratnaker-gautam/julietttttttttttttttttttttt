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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITpHn

void iTDDgKmhEkbuVClnkqHb_pHn()
{
    if(staticFive==5)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITWxD

/* a a a a a a */
static void WxD1()
{
    if(staticFive!=5)
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
static void WxD2()
{
    if(staticFive==5)
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

void iTDDgKmhEkbuVClnkqHb_WxD()
{
    WxD1();
    WxD2();
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
#ifndef OMITWxD
    printLine("Calling WxD()...");
    iTDDgKmhEkbuVClnkqHb_WxD();
    printLine("Finished WxD()");
#endif /* a */
#ifndef OMITpHn
    printLine("Calling pHn()...");
    iTDDgKmhEkbuVClnkqHb_pHn();
    printLine("Finished pHn()");
#endif /* a */
    return 0;
}

#endif
