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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#include <rpcdce.h>
# pragma comment(lib, "rpcrt4")

#ifndef OMITwCS

void CllwXIDeiTzNcYkhQXGT_wCS()
{
    RpcImpersonateClient(0);
    /* a a a a a a a */
    /* a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
}

#endif /* a */

#ifndef OMITFWK

static void FWK1()
{
    /* a a a a a a a a a */
    if (RpcImpersonateClient(0) != RPC_S_OK)
    {
        exit(1);
    }
    /* a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
}

void CllwXIDeiTzNcYkhQXGT_FWK()
{
    FWK1();
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
#ifndef OMITFWK
    printLine("Calling FWK()...");
    CllwXIDeiTzNcYkhQXGT_FWK();
    printLine("Finished FWK()");
#endif /* a */
#ifndef OMITwCS
    printLine("Calling wCS()...");
    CllwXIDeiTzNcYkhQXGT_wCS();
    printLine("Finished wCS()");
#endif /* a */
    return 0;
}

#endif
