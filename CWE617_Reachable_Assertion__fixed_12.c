/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#ifndef OMITiFd

void jfnpuASekmEBgpMgIBGR_iFd()
{
    int data;
    /* a a */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE-1;
    }
    else
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITaYU

/* a a a a a a a a a a a a
 * a a a a a */
static void aYUG2B()
{
    int data;
    /* a a */
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    else
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void jfnpuASekmEBgpMgIBGR_aYU()
{
    aYUG2B();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITaYU
    printLine("Calling aYU()...");
    jfnpuASekmEBgpMgIBGR_aYU();
    printLine("Finished aYU()");
#endif /* a */
#ifndef OMITiFd
    printLine("Calling iFd()...");
    jfnpuASekmEBgpMgIBGR_iFd();
    printLine("Finished iFd()");
#endif /* a */
    return 0;
}

#endif
