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
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITyiV

void TvKcuaxnUBqHzWjNRALq_yiV()
{
    if(staticFive==5)
    {
        {
            static stdThreadLock yiVLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&yiVLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(yiVLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITvYI

/* a a a a a a */
static void vYI1()
{
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock vYILock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&vYILock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(vYILock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(vYILock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(vYILock);
        }
    }
}

/* a a a a a a a a */
static void vYI2()
{
    if(staticFive==5)
    {
        {
            static stdThreadLock vYILock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&vYILock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(vYILock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(vYILock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(vYILock);
        }
    }
}

void TvKcuaxnUBqHzWjNRALq_vYI()
{
    vYI1();
    vYI2();
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
#ifndef OMITvYI
    printLine("Calling vYI()...");
    TvKcuaxnUBqHzWjNRALq_vYI();
    printLine("Finished vYI()");
#endif /* a */
#ifndef OMITyiV
    printLine("Calling yiV()...");
    TvKcuaxnUBqHzWjNRALq_yiV();
    printLine("Finished yiV()");
#endif /* a */
    return 0;
}

#endif
