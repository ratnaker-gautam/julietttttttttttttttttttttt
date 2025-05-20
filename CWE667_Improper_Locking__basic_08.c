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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITlMW

void HeQqGkJNVreXBEvWOSDZ_lMW()
{
    if(staticReturnsTrue())
    {
        {
            static stdThreadLock lMWLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&lMWLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(lMWLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITkRj

/* a a a a a a */
static void kRj1()
{
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock kRjLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&kRjLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(kRjLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(kRjLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(kRjLock);
        }
    }
}

/* a a a a a a a a */
static void kRj2()
{
    if(staticReturnsTrue())
    {
        {
            static stdThreadLock kRjLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&kRjLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(kRjLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(kRjLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(kRjLock);
        }
    }
}

void HeQqGkJNVreXBEvWOSDZ_kRj()
{
    kRj1();
    kRj2();
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
#ifndef OMITkRj
    printLine("Calling kRj()...");
    HeQqGkJNVreXBEvWOSDZ_kRj();
    printLine("Finished kRj()");
#endif /* a */
#ifndef OMITlMW
    printLine("Calling lMW()...");
    HeQqGkJNVreXBEvWOSDZ_lMW();
    printLine("Finished lMW()");
#endif /* a */
    return 0;
}

#endif
