/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a
 * a a a a a
 * a
 *    a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

#define ASSERT_VALUE 5

#ifndef OMITsmX

/* a a a a a a a a a a a a a a */
int RtuTZMRHuTmpyyclZDbR__connect_socket_22_smXGlobal = 0;

int RtuTZMRHuTmpyyclZDbR__connect_socket_22_smXSource(int data);

void RtuTZMRHuTmpyyclZDbR__connect_socket_22_smX()
{
    int data;
    /* a a */
    data = -1;
    RtuTZMRHuTmpyyclZDbR__connect_socket_22_smXGlobal = 1; /* a */
    data = RtuTZMRHuTmpyyclZDbR__connect_socket_22_smXSource(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

#endif /* a */

#ifndef OMITtaL

/* a a a a a a a a a a a a a a */
int RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B1Global = 0;
int RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
int RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B1Source(int data);

static void taLG2B1()
{
    int data;
    /* a a */
    data = -1;
    RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B1Global = 0; /* a */
    data = RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B1Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

/* a a a a a a a a a a a a a a a a a */
int RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B2Source(int data);

static void taLG2B2()
{
    int data;
    /* a a */
    data = -1;
    RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B2Global = 1; /* a */
    data = RtuTZMRHuTmpyyclZDbR__connect_socket_22_taLG2B2Source(data);
    /* a a a a a a a a a a */
    assert(data > ASSERT_VALUE);
}

void RtuTZMRHuTmpyyclZDbR__connect_socket_22_taL()
{
    taLG2B1();
    taLG2B2();
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
#ifndef OMITtaL
    printLine("Calling taL()...");
    RtuTZMRHuTmpyyclZDbR__connect_socket_22_taL();
    printLine("Finished taL()");
#endif /* a */
#ifndef OMITsmX
    printLine("Calling smX()...");
    RtuTZMRHuTmpyyclZDbR__connect_socket_22_smX();
    printLine("Finished smX()");
#endif /* a */
    return 0;
}

#endif
