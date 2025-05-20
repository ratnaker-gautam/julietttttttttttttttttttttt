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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMIThmK

void GmwuCZILEQLwKfISPiXl_hmK()
{
    void * data;
    /* a a */
    data = NULL;
    goto source;
source:
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITEIP

/* a a a a a a a a a a a a a a */
static void EIPG2B()
{
    void * data;
    /* a a */
    data = NULL;
    goto source;
source:
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void GmwuCZILEQLwKfISPiXl_EIP()
{
    EIPG2B();
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
#ifndef OMITEIP
    printLine("Calling EIP()...");
    GmwuCZILEQLwKfISPiXl_EIP();
    printLine("Finished EIP()");
#endif /* a */
#ifndef OMIThmK
    printLine("Calling hmK()...");
    GmwuCZILEQLwKfISPiXl_hmK();
    printLine("Finished hmK()");
#endif /* a */
    return 0;
}

#endif
