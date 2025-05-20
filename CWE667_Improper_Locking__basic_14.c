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

#ifndef OMITGwf

void vWuSYllaVUPreWWIKJAA_Gwf()
{
    if(globalFive==5)
    {
        {
            static stdThreadLock GwfLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&GwfLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(GwfLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITHPv

/* a a a a a a */
static void HPv1()
{
    if(globalFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock HPvLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&HPvLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(HPvLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(HPvLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(HPvLock);
        }
    }
}

/* a a a a a a a a */
static void HPv2()
{
    if(globalFive==5)
    {
        {
            static stdThreadLock HPvLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&HPvLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(HPvLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(HPvLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(HPvLock);
        }
    }
}

void vWuSYllaVUPreWWIKJAA_HPv()
{
    HPv1();
    HPv2();
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
#ifndef OMITHPv
    printLine("Calling HPv()...");
    vWuSYllaVUPreWWIKJAA_HPv();
    printLine("Finished HPv()");
#endif /* a */
#ifndef OMITGwf
    printLine("Calling Gwf()...");
    vWuSYllaVUPreWWIKJAA_Gwf();
    printLine("Finished Gwf()");
#endif /* a */
    return 0;
}

#endif
