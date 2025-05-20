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

/* a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a
 */
static int staticFive = 5;

#ifndef OMITYxL

void NIGlobFxmotuClbfRKoO_YxL()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITPVi

/* a a a a a a a a a a a a */
static void PViG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive!=5)
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
static void PViG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(staticFive==5)
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void NIGlobFxmotuClbfRKoO_PVi()
{
    PViG2B1();
    PViG2B2();
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
#ifndef OMITPVi
    printLine("Calling PVi()...");
    NIGlobFxmotuClbfRKoO_PVi();
    printLine("Finished PVi()");
#endif /* a */
#ifndef OMITYxL
    printLine("Calling YxL()...");
    NIGlobFxmotuClbfRKoO_YxL();
    printLine("Finished YxL()");
#endif /* a */
    return 0;
}

#endif
