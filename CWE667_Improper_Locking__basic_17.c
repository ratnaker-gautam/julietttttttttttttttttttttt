/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a
 *    a a a a a a a
 *    a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include "std_thread.h"

#ifndef OMITnPZ

void kyYnNCdlfnfGgOdXGkhV_nPZ()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            static stdThreadLock nPZLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&nPZLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(nPZLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITcXv

/* a a a a a a a a */
static void cXv1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            static stdThreadLock cXvLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&cXvLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(cXvLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(cXvLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(cXvLock);
        }
    }
}

void kyYnNCdlfnfGgOdXGkhV_cXv()
{
    cXv1();
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
#ifndef OMITcXv
    printLine("Calling cXv()...");
    kyYnNCdlfnfGgOdXGkhV_cXv();
    printLine("Finished cXv()");
#endif /* a */
#ifndef OMITnPZ
    printLine("Calling nPZ()...");
    kyYnNCdlfnfGgOdXGkhV_nPZ();
    printLine("Finished nPZ()");
#endif /* a */
    return 0;
}

#endif
