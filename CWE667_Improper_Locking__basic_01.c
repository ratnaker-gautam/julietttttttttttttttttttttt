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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include "std_thread.h"

#ifndef OMITajD

void tSpoJnSKNdUGAGjvLlcZ_ajD()
{
    {
        static stdThreadLock ajDLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&ajDLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(ajDLock);
        /* a a a a a a */
    }
}

#endif /* a */

#ifndef OMITokC

static void okC1()
{
    {
        static stdThreadLock okCLock = NULL;
        printLine("Creating lock...");
        if (!stdThreadLockCreate(&okCLock))
        {
            printLine("Could not create lock");
            exit(1);
        }
        printLine("Acquiring lock...");
        stdThreadLockAcquire(okCLock);
        /* a a a a a a */
        printLine("Releasing lock...");
        stdThreadLockRelease(okCLock);
        printLine("Destroying lock...");
        stdThreadLockDestroy(okCLock);
    }
}

void tSpoJnSKNdUGAGjvLlcZ_okC()
{
    okC1();
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
#ifndef OMITokC
    printLine("Calling okC()...");
    tSpoJnSKNdUGAGjvLlcZ_okC();
    printLine("Finished okC()");
#endif /* a */
#ifndef OMITajD
    printLine("Calling ajD()...");
    tSpoJnSKNdUGAGjvLlcZ_ajD();
    printLine("Finished ajD()");
#endif /* a */
    return 0;
}

#endif
