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

#ifndef OMITppo

void eNJKAvwKjtUjikxJGYGB_ppo()
{
    void * data;
    /* a a */
    data = NULL;
    if(1)
    {
        {
            /* a a a a a a */
            short shortBuffer = 8;
            data = &shortBuffer;
        }
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITHxs

/* a a a a a a a a a a a a */
static void HxsG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    if(0)
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
static void HxsG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    if(1)
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

void eNJKAvwKjtUjikxJGYGB_Hxs()
{
    HxsG2B1();
    HxsG2B2();
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
#ifndef OMITHxs
    printLine("Calling Hxs()...");
    eNJKAvwKjtUjikxJGYGB_Hxs();
    printLine("Finished Hxs()");
#endif /* a */
#ifndef OMITppo
    printLine("Calling ppo()...");
    eNJKAvwKjtUjikxJGYGB_ppo();
    printLine("Finished ppo()");
#endif /* a */
    return 0;
}

#endif
