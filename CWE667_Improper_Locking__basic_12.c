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

#ifndef OMITyUk

void FkZjaaShALWNwHHtrWjZ_yUk()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            static stdThreadLock yUkLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&yUkLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(yUkLock);
            /* a a a a a a */
        }
    }
    else
    {
        {
            static stdThreadLock eTQLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&eTQLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(eTQLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(eTQLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(eTQLock);
        }
    }
}

#endif /* a */

#ifndef OMITeTQ

/* a a a a a a a a a a a */
static void eTQ1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            static stdThreadLock eTQLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&eTQLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(eTQLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(eTQLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(eTQLock);
        }
    }
    else
    {
        {
            static stdThreadLock eTQLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&eTQLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(eTQLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(eTQLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(eTQLock);
        }
    }
}

void FkZjaaShALWNwHHtrWjZ_eTQ()
{
    eTQ1();
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
#ifndef OMITeTQ
    printLine("Calling eTQ()...");
    FkZjaaShALWNwHHtrWjZ_eTQ();
    printLine("Finished eTQ()");
#endif /* a */
#ifndef OMITyUk
    printLine("Calling yUk()...");
    FkZjaaShALWNwHHtrWjZ_yUk();
    printLine("Finished yUk()");
#endif /* a */
    return 0;
}

#endif
