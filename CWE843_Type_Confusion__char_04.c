/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

/* a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITWJs

void sgZmAnEKWPywyyGqiOSn_WJs()
{
    void * data;
    /* a a */
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            /* a a a a a a */
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITfTO

/* a a a a a a a a a a a a */
static void fTOG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

/* a a a a a a a a a a a a a a */
static void fTOG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            /* a a a a a a */
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void sgZmAnEKWPywyyGqiOSn_fTO()
{
    fTOG2B1();
    fTOG2B2();
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
#ifndef OMITfTO
    printLine("Calling fTO()...");
    sgZmAnEKWPywyyGqiOSn_fTO();
    printLine("Finished fTO()");
#endif /* a */
#ifndef OMITWJs
    printLine("Calling WJs()...");
    sgZmAnEKWPywyyGqiOSn_WJs();
    printLine("Finished WJs()");
#endif /* a */
    return 0;
}

#endif
