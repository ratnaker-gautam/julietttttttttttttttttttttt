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

#ifndef OMITiAX

void efYvvxQRhHXuqwcmEiRG_iAX()
{
    if(1)
    {
        {
            static stdThreadLock iAXLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&iAXLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(iAXLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITKcR

/* a a a a a a */
static void KcR1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock KcRLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&KcRLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(KcRLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(KcRLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(KcRLock);
        }
    }
}

/* a a a a a a a a */
static void KcR2()
{
    if(1)
    {
        {
            static stdThreadLock KcRLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&KcRLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(KcRLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(KcRLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(KcRLock);
        }
    }
}

void efYvvxQRhHXuqwcmEiRG_KcR()
{
    KcR1();
    KcR2();
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
#ifndef OMITKcR
    printLine("Calling KcR()...");
    efYvvxQRhHXuqwcmEiRG_KcR();
    printLine("Finished KcR()");
#endif /* a */
#ifndef OMITiAX
    printLine("Calling iAX()...");
    efYvvxQRhHXuqwcmEiRG_iAX();
    printLine("Finished iAX()");
#endif /* a */
    return 0;
}

#endif
