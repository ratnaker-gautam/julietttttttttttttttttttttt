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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITIZx

void FJFcDilrVGMvvmaSvYit_IZx()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = RAND32();
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITeiT

/* a a a a a a a a a a a a */
static void eiTG2B1()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE!=5)
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
static void eiTG2B2()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        data = ASSERT_VALUE+1;
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void FJFcDilrVGMvvmaSvYit_eiT()
{
    eiTG2B1();
    eiTG2B2();
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
#ifndef OMITeiT
    printLine("Calling eiT()...");
    FJFcDilrVGMvvmaSvYit_eiT();
    printLine("Finished eiT()");
#endif /* a */
#ifndef OMITIZx
    printLine("Calling IZx()...");
    FJFcDilrVGMvvmaSvYit_IZx();
    printLine("Finished IZx()");
#endif /* a */
    return 0;
}

#endif
