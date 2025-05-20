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
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITOmT

void DYKBnFAupMLOnioDQpRu_OmT()
{
    if(staticTrue)
    {
        RpcImpersonateClient(0);
        /* a a a a a a a */
        /* a a a a a a a a a a a a a a a a
         * a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITHfF

/* a a a a a a */
static void HfF1()
{
    if(staticFalse)
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
static void HfF2()
{
    if(staticTrue)
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

void DYKBnFAupMLOnioDQpRu_HfF()
{
    HfF1();
    HfF2();
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
#ifndef OMITHfF
    printLine("Calling HfF()...");
    DYKBnFAupMLOnioDQpRu_HfF();
    printLine("Finished HfF()");
#endif /* a */
#ifndef OMITOmT
    printLine("Calling OmT()...");
    DYKBnFAupMLOnioDQpRu_OmT();
    printLine("Finished OmT()");
#endif /* a */
    return 0;
}

#endif
