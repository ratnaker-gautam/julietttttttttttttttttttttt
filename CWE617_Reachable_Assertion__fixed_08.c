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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a a a
 */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITCgq

void vMNVorksdfYBeOJUvcsa_Cgq()
{
    int data;
    /* a a */
    data = -1;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE-1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITNIq

/* a a a a a a a a a a a a */
static void NIqG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

/* a a a a a a a a a a a a a a */
static void NIqG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void vMNVorksdfYBeOJUvcsa_NIq()
{
    NIqG2B1();
    NIqG2B2();
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
#ifndef OMITNIq
    printLine("Calling NIq()...");
    vMNVorksdfYBeOJUvcsa_NIq();
    printLine("Finished NIq()");
#endif /* a */
#ifndef OMITCgq
    printLine("Calling Cgq()...");
    vMNVorksdfYBeOJUvcsa_Cgq();
    printLine("Finished Cgq()");
#endif /* a */
    return 0;
}

#endif
