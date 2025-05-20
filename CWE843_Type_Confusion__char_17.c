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

#ifndef OMITjbp

void BTsWjzppbElDldCfNDFn_jbp()
{
    int i;
    void * data;
    /* a a */
    data = NULL;
    for(i = 0; i < 1; i++)
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

#ifndef OMITbvx

/* a a a a a a a a a a a a a a */
static void bvxG2B()
{
    int h;
    void * data;
    /* a a */
    data = NULL;
    for(h = 0; h < 1; h++)
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

void BTsWjzppbElDldCfNDFn_bvx()
{
    bvxG2B();
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
#ifndef OMITbvx
    printLine("Calling bvx()...");
    BTsWjzppbElDldCfNDFn_bvx();
    printLine("Finished bvx()");
#endif /* a */
#ifndef OMITjbp
    printLine("Calling jbp()...");
    BTsWjzppbElDldCfNDFn_jbp();
    printLine("Finished jbp()");
#endif /* a */
    return 0;
}

#endif
