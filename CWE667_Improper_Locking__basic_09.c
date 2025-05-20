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

#ifndef OMITopy

void nSNZBPeEZiBYHPnNeyet_opy()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            static stdThreadLock opyLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&opyLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(opyLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITxSZ

/* a a a a a a */
static void xSZ1()
{
    if(GLOBAL_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock xSZLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&xSZLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(xSZLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(xSZLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(xSZLock);
        }
    }
}

/* a a a a a a a a */
static void xSZ2()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            static stdThreadLock xSZLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&xSZLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(xSZLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(xSZLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(xSZLock);
        }
    }
}

void nSNZBPeEZiBYHPnNeyet_xSZ()
{
    xSZ1();
    xSZ2();
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
#ifndef OMITxSZ
    printLine("Calling xSZ()...");
    nSNZBPeEZiBYHPnNeyet_xSZ();
    printLine("Finished xSZ()");
#endif /* a */
#ifndef OMITopy
    printLine("Calling opy()...");
    nSNZBPeEZiBYHPnNeyet_opy();
    printLine("Finished opy()");
#endif /* a */
    return 0;
}

#endif
