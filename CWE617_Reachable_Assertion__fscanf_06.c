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
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITAKb

void HdhcPQcJeAVreeRQopWX_AKb()
{
    int data;
    /* a a */
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        fscanf(stdin, "%d", &data);
    }
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITSkB

/* a a a a a a a a a a a a */
static void SkBG2B1()
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
static void SkBG2B2()
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

void HdhcPQcJeAVreeRQopWX_SkB()
{
    SkBG2B1();
    SkBG2B2();
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
#ifndef OMITSkB
    printLine("Calling SkB()...");
    HdhcPQcJeAVreeRQopWX_SkB();
    printLine("Finished SkB()");
#endif /* a */
#ifndef OMITAKb
    printLine("Calling AKb()...");
    HdhcPQcJeAVreeRQopWX_AKb();
    printLine("Finished AKb()");
#endif /* a */
    return 0;
}

#endif
