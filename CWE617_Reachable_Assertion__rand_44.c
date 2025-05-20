/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#ifndef OMITARL

static void ARLSink(int data)
{
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void vlCrrIZbylABfqEsNoVa_ARL()
{
    int data;
    /* a a a a */
    void (*funcPtr) (int) = ARLSink;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = RAND32();
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITvFx

/* a a a a a a a */
static void vFxG2BSink(int data)
{
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

static void vFxG2B()
{
    int data;
    void (*funcPtr) (int) = vFxG2BSink;
    /* a a */
    data = -1;
    /* a a a a a a a a a */
    data = ASSERT_VALUE+1;
    funcPtr(data);
}

void vlCrrIZbylABfqEsNoVa_vFx()
{
    vFxG2B();
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
#ifndef OMITvFx
    printLine("Calling vFx()...");
    vlCrrIZbylABfqEsNoVa_vFx();
    printLine("Finished vFx()");
#endif /* a */
#ifndef OMITARL
    printLine("Calling ARL()...");
    vlCrrIZbylABfqEsNoVa_ARL();
    printLine("Finished ARL()");
#endif /* a */
    return 0;
}

#endif
