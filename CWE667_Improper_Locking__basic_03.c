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

#ifndef OMITrjc

void tNEmpZEFSsmLlcoYiWAk_rjc()
{
    if(5==5)
    {
        {
            static stdThreadLock rjcLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&rjcLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(rjcLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITksp

/* a a a a a a */
static void ksp1()
{
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock kspLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&kspLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(kspLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(kspLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(kspLock);
        }
    }
}

/* a a a a a a a a */
static void ksp2()
{
    if(5==5)
    {
        {
            static stdThreadLock kspLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&kspLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(kspLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(kspLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(kspLock);
        }
    }
}

void tNEmpZEFSsmLlcoYiWAk_ksp()
{
    ksp1();
    ksp2();
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
#ifndef OMITksp
    printLine("Calling ksp()...");
    tNEmpZEFSsmLlcoYiWAk_ksp();
    printLine("Finished ksp()");
#endif /* a */
#ifndef OMITrjc
    printLine("Calling rjc()...");
    tNEmpZEFSsmLlcoYiWAk_rjc();
    printLine("Finished rjc()");
#endif /* a */
    return 0;
}

#endif
