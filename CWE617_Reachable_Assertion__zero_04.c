/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <assert.h>

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITflT

void AvYhcByUZyXpKuaKFVpc_flT()
{
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a */
        assert(0); /* a a a a a a a a a a a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITYtl

/* a a a a a a */
static void Ytl1()
{
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a
        * a a
        */
        assert(1); /* a a a a a a a a a a a a a a a a a */
    }
}

/* a a a a a a a a */
static void Ytl2()
{
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a a
        * a a
        */
        assert(1); /* a a a a a a a a a a a a a a a a a */
    }
}

void AvYhcByUZyXpKuaKFVpc_Ytl()
{
    Ytl1();
    Ytl2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITYtl
    printLine("Calling Ytl()...");
    AvYhcByUZyXpKuaKFVpc_Ytl();
    printLine("Finished Ytl()");
#endif /* a */
#ifndef OMITflT
    printLine("Calling flT()...");
    AvYhcByUZyXpKuaKFVpc_flT();
    printLine("Finished flT()");
#endif /* a */
    return 0;
}

#endif
