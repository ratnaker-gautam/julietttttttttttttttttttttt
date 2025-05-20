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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include "std_thread.h"

#ifndef OMITSUj

void MHRkkvxexVpROPQCwSGf_SUj()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            static stdThreadLock SUjLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&SUjLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(SUjLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITCBG

/* a a a a a a */
static void CBG1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock CBGLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&CBGLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(CBGLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(CBGLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(CBGLock);
        }
    }
}

/* a a a a a a a a */
static void CBG2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            static stdThreadLock CBGLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&CBGLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(CBGLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(CBGLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(CBGLock);
        }
    }
}

void MHRkkvxexVpROPQCwSGf_CBG()
{
    CBG1();
    CBG2();
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
#ifndef OMITCBG
    printLine("Calling CBG()...");
    MHRkkvxexVpROPQCwSGf_CBG();
    printLine("Finished CBG()");
#endif /* a */
#ifndef OMITSUj
    printLine("Calling SUj()...");
    MHRkkvxexVpROPQCwSGf_SUj();
    printLine("Finished SUj()");
#endif /* a */
    return 0;
}

#endif
