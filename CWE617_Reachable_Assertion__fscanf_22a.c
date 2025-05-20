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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#ifndef OMIToMg

/* a a a a a a a a a a a a a a */
int JDXGqzHWiToTWCfXrBbU__fscanf_22_oMgGlobal = 0;

int JDXGqzHWiToTWCfXrBbU__fscanf_22_oMgSource(int data);

void JDXGqzHWiToTWCfXrBbU__fscanf_22_oMg()
{
    int data;
    /* a a */
    data = -1;
    JDXGqzHWiToTWCfXrBbU__fscanf_22_oMgGlobal = 1; /* a */
    data = JDXGqzHWiToTWCfXrBbU__fscanf_22_oMgSource(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITzjf

/* a a a a a a a a a a a a a a */
int JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B1Global = 0;
int JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
int JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B1Source(int data);

static void zjfG2B1()
{
    int data;
    /* a a */
    data = -1;
    JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B1Global = 0; /* a */
    data = JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B1Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

/* a a a a a a a a a a a a a a a a a */
int JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B2Source(int data);

static void zjfG2B2()
{
    int data;
    /* a a */
    data = -1;
    JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B2Global = 1; /* a */
    data = JDXGqzHWiToTWCfXrBbU__fscanf_22_zjfG2B2Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void JDXGqzHWiToTWCfXrBbU__fscanf_22_zjf()
{
    zjfG2B1();
    zjfG2B2();
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
#ifndef OMITzjf
    printLine("Calling zjf()...");
    JDXGqzHWiToTWCfXrBbU__fscanf_22_zjf();
    printLine("Finished zjf()");
#endif /* a */
#ifndef OMIToMg
    printLine("Calling oMg()...");
    JDXGqzHWiToTWCfXrBbU__fscanf_22_oMg();
    printLine("Finished oMg()");
#endif /* a */
    return 0;
}

#endif
