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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

typedef union
{
    int unionFirst;
    int unionSecond;
} RmuCJkTbpkyWDdWKoEgD_unionType;

#ifndef OMITjth

void RmuCJkTbpkyWDdWKoEgD_jth()
{
    int data;
    RmuCJkTbpkyWDdWKoEgD_unionType myUnion;
    /* a a */
    data = -1;
    /* a a a a a a a a */
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        assert(data > ASSERT_VALUE);
    }
}

#endif /* a */

#ifndef OMITMmv

/* a a a a a a a */
static void MmvG2B()
{
    int data;
    RmuCJkTbpkyWDdWKoEgD_unionType myUnion;
    /* a a */
    data = -1;
    /* a a a a a a a a a */
    data = ASSERT_VALUE+1;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        assert(data > ASSERT_VALUE);
    }
}

void RmuCJkTbpkyWDdWKoEgD_Mmv()
{
    MmvG2B();
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
#ifndef OMITMmv
    printLine("Calling Mmv()...");
    RmuCJkTbpkyWDdWKoEgD_Mmv();
    printLine("Finished Mmv()");
#endif /* a */
#ifndef OMITjth
    printLine("Calling jth()...");
    RmuCJkTbpkyWDdWKoEgD_jth();
    printLine("Finished jth()");
#endif /* a */
    return 0;
}

#endif
