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

#ifndef OMITUNb

void GIdNpeQvvawacosvqBBw_UNb()
{
    if(globalReturnsTrue())
    {
        {
            static stdThreadLock UNbLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&UNbLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(UNbLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITXaC

/* a a a a a a */
static void XaC1()
{
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock XaCLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&XaCLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(XaCLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(XaCLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(XaCLock);
        }
    }
}

/* a a a a a a a a */
static void XaC2()
{
    if(globalReturnsTrue())
    {
        {
            static stdThreadLock XaCLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&XaCLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(XaCLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(XaCLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(XaCLock);
        }
    }
}

void GIdNpeQvvawacosvqBBw_XaC()
{
    XaC1();
    XaC2();
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
#ifndef OMITXaC
    printLine("Calling XaC()...");
    GIdNpeQvvawacosvqBBw_XaC();
    printLine("Finished XaC()");
#endif /* a */
#ifndef OMITUNb
    printLine("Calling UNb()...");
    GIdNpeQvvawacosvqBBw_UNb();
    printLine("Finished UNb()");
#endif /* a */
    return 0;
}

#endif
