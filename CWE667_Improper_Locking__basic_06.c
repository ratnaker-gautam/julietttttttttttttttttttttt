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
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITPnJ

void FeyGXplAsDSpumVYEYMr_PnJ()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            static stdThreadLock PnJLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&PnJLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(PnJLock);
            /* a a a a a a */
        }
    }
}

#endif /* a */

#ifndef OMITpMN

/* a a a a a a */
static void pMN1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            static stdThreadLock pMNLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&pMNLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(pMNLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(pMNLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(pMNLock);
        }
    }
}

/* a a a a a a a a */
static void pMN2()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            static stdThreadLock pMNLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&pMNLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(pMNLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(pMNLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(pMNLock);
        }
    }
}

void FeyGXplAsDSpumVYEYMr_pMN()
{
    pMN1();
    pMN2();
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
#ifndef OMITpMN
    printLine("Calling pMN()...");
    FeyGXplAsDSpumVYEYMr_pMN();
    printLine("Finished pMN()");
#endif /* a */
#ifndef OMITPnJ
    printLine("Calling PnJ()...");
    FeyGXplAsDSpumVYEYMr_PnJ();
    printLine("Finished PnJ()");
#endif /* a */
    return 0;
}

#endif
