/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a
 * a a a a a a a a a a a
 * a
 *    a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITyYB

void WVoUYjcFAvOtBOOBsYQO_yYB()
{
    int i;
    int64_t * data;
    /* a a */
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a a a a a */
        /* a a a a a a a a a a a a */
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    /* a a a a a a a a a a a a a */
    printLongLongLine(*data);
    free(data);
}

#endif /* a */

#ifndef OMITFbR

/* a a a a a a a a a a a a a a */
static void FbRG2B()
{
    int h;
    int64_t * data;
    /* a a */
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a a */
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    /* a a a a a a a a a a a a a */
    printLongLongLine(*data);
    free(data);
}

void WVoUYjcFAvOtBOOBsYQO_FbR()
{
    FbRG2B();
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
#ifndef OMITFbR
    printLine("Calling FbR()...");
    WVoUYjcFAvOtBOOBsYQO_FbR();
    printLine("Finished FbR()");
#endif /* a */
#ifndef OMITyYB
    printLine("Calling yYB()...");
    WVoUYjcFAvOtBOOBsYQO_yYB();
    printLine("Finished yYB()");
#endif /* a */
    return 0;
}

#endif
