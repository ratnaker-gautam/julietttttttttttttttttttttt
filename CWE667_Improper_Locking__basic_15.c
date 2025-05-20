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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include "std_thread.h"

#ifndef OMITEAP

void NQGjyKQKsttgmsGLFuYB_EAP()
{
    switch(6)
    {
    case 6:
    {
        static stdThreadLock EAPLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&EAPLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(EAPLock);
        /* a a a a a a */
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITwBi

/* a a a a a a */
static void wBi1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        static stdThreadLock wBiLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&wBiLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(wBiLock);
        /* a a a a a a */
        printLine("Releasing lock...");
        stdThreadLockRelease(wBiLock);
        printLine("Destroying lock...");
        stdThreadLockDestroy(wBiLock);
    }
    break;
    }
}

/* a a a a a a a */
static void wBi2()
{
    switch(6)
    {
    case 6:
    {
        static stdThreadLock wBiLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&wBiLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(wBiLock);
        /* a a a a a a */
        printLine("Releasing lock...");
        stdThreadLockRelease(wBiLock);
        printLine("Destroying lock...");
        stdThreadLockDestroy(wBiLock);
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void NQGjyKQKsttgmsGLFuYB_wBi()
{
    wBi1();
    wBi2();
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
#ifndef OMITwBi
    printLine("Calling wBi()...");
    NQGjyKQKsttgmsGLFuYB_wBi();
    printLine("Finished wBi()");
#endif /* a */
#ifndef OMITEAP
    printLine("Calling EAP()...");
    NQGjyKQKsttgmsGLFuYB_EAP();
    printLine("Finished EAP()");
#endif /* a */
    return 0;
}

#endif
