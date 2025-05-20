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
} nNSTyYiAeAOPXCoZKpUA_unionType;

#ifndef OMITKIH

void nNSTyYiAeAOPXCoZKpUA_KIH()
{
    int data;
    nNSTyYiAeAOPXCoZKpUA_unionType myUnion;
    /* a a */
    data = -1;
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &data);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        assert(data > ASSERT_VALUE);
    }
}

#endif /* a */

#ifndef OMITRBt

/* a a a a a a a */
static void RBtG2B()
{
    int data;
    nNSTyYiAeAOPXCoZKpUA_unionType myUnion;
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

void nNSTyYiAeAOPXCoZKpUA_RBt()
{
    RBtG2B();
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
#ifndef OMITRBt
    printLine("Calling RBt()...");
    nNSTyYiAeAOPXCoZKpUA_RBt();
    printLine("Finished RBt()");
#endif /* a */
#ifndef OMITKIH
    printLine("Calling KIH()...");
    nNSTyYiAeAOPXCoZKpUA_KIH();
    printLine("Finished KIH()");
#endif /* a */
    return 0;
}

#endif
