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

#ifndef OMITayW

void BohtgCHJwhXGSdGFeDub_ayW()
{
    void * data;
    /* a a */
    data = NULL;
    if(5==5)
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

#ifndef OMITJpg

/* a a a a a a a a a a a a */
static void JpgG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(5!=5)
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
static void JpgG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(5==5)
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

void BohtgCHJwhXGSdGFeDub_Jpg()
{
    JpgG2B1();
    JpgG2B2();
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
#ifndef OMITJpg
    printLine("Calling Jpg()...");
    BohtgCHJwhXGSdGFeDub_Jpg();
    printLine("Finished Jpg()");
#endif /* a */
#ifndef OMITayW
    printLine("Calling ayW()...");
    BohtgCHJwhXGSdGFeDub_ayW();
    printLine("Finished ayW()");
#endif /* a */
    return 0;
}

#endif
