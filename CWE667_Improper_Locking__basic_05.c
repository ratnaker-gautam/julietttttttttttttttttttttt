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
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITzLS

void yfxKpIqdWKFCNQPkZOap_zLS()
{
    if(staticTrue)
    {
        {
            static stdThreadLock zLSLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&zLSLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(zLSLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITHrc

/* a a a a a a */
static void Hrc1()
{
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock HrcLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&HrcLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(HrcLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(HrcLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(HrcLock);
        }
    }
}

/* a a a a a a a a */
static void Hrc2()
{
    if(staticTrue)
    {
        {
            static stdThreadLock HrcLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&HrcLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(HrcLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(HrcLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(HrcLock);
        }
    }
}

void yfxKpIqdWKFCNQPkZOap_Hrc()
{
    Hrc1();
    Hrc2();
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
#ifndef OMITHrc
    printLine("Calling Hrc()...");
    yfxKpIqdWKFCNQPkZOap_Hrc();
    printLine("Finished Hrc()");
#endif /* a */
#ifndef OMITzLS
    printLine("Calling zLS()...");
    yfxKpIqdWKFCNQPkZOap_zLS();
    printLine("Finished zLS()");
#endif /* a */
    return 0;
}

#endif
