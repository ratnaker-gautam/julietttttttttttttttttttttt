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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include "std_thread.h"

#ifndef OMITQQQ

void rgjLOBDZVABsILqGvpXV_QQQ()
{
    goto sink;
sink:
    {
        static stdThreadLock QQQLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&QQQLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(QQQLock);
        /* a a a a a a */
    }
}

#endif /* a */

#ifndef OMITvNd

/* a a a a a a a a */
static void vNd1()
{
    goto sink;
sink:
    {
        static stdThreadLock vNdLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&vNdLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(vNdLock);
        /* a a a a a a */
        printLine("Releasing lock...");
        stdThreadLockRelease(vNdLock);
        printLine("Destroying lock...");
        stdThreadLockDestroy(vNdLock);
    }
}

void rgjLOBDZVABsILqGvpXV_vNd()
{
    vNd1();
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
#ifndef OMITvNd
    printLine("Calling vNd()...");
    rgjLOBDZVABsILqGvpXV_vNd();
    printLine("Finished vNd()");
#endif /* a */
#ifndef OMITQQQ
    printLine("Calling QQQ()...");
    rgjLOBDZVABsILqGvpXV_QQQ();
    printLine("Finished QQQ()");
#endif /* a */
    return 0;
}

#endif
