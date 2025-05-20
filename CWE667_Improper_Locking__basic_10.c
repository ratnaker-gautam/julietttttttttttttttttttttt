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

#ifndef OMITzLg

void UyYRFAnvFOLBeLsaoTWQ_zLg()
{
    if(globalTrue)
    {
        {
            static stdThreadLock zLgLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&zLgLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(zLgLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITdHs

/* a a a a a a */
static void dHs1()
{
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock dHsLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&dHsLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(dHsLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(dHsLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(dHsLock);
        }
    }
}

/* a a a a a a a a */
static void dHs2()
{
    if(globalTrue)
    {
        {
            static stdThreadLock dHsLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&dHsLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(dHsLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(dHsLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(dHsLock);
        }
    }
}

void UyYRFAnvFOLBeLsaoTWQ_dHs()
{
    dHs1();
    dHs2();
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
#ifndef OMITdHs
    printLine("Calling dHs()...");
    UyYRFAnvFOLBeLsaoTWQ_dHs();
    printLine("Finished dHs()");
#endif /* a */
#ifndef OMITzLg
    printLine("Calling zLg()...");
    UyYRFAnvFOLBeLsaoTWQ_zLg();
    printLine("Finished zLg()");
#endif /* a */
    return 0;
}

#endif
