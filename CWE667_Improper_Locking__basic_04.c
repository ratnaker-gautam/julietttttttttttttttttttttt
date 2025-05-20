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

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITrbO

void pEqMPOtGhofvHUvUUDEH_rbO()
{
    if(STATIC_CONST_TRUE)
    {
        {
            static stdThreadLock rbOLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&rbOLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(rbOLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITsSr

/* a a a a a a */
static void sSr1()
{
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock sSrLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&sSrLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(sSrLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(sSrLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(sSrLock);
        }
    }
}

/* a a a a a a a a */
static void sSr2()
{
    if(STATIC_CONST_TRUE)
    {
        {
            static stdThreadLock sSrLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&sSrLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(sSrLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(sSrLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(sSrLock);
        }
    }
}

void pEqMPOtGhofvHUvUUDEH_sSr()
{
    sSr1();
    sSr2();
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
#ifndef OMITsSr
    printLine("Calling sSr()...");
    pEqMPOtGhofvHUvUUDEH_sSr();
    printLine("Finished sSr()");
#endif /* a */
#ifndef OMITrbO
    printLine("Calling rbO()...");
    pEqMPOtGhofvHUvUUDEH_rbO();
    printLine("Finished rbO()");
#endif /* a */
    return 0;
}

#endif
