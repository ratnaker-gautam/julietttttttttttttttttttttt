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

#ifndef OMITUmI

void GucOzERMrjxKZSvJUajU_UmI()
{
    while(1)
    {
        {
            static stdThreadLock UmILock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&UmILock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(UmILock);
            /* a a a a a a */
        }
        break;
    }
}

#endif /* a */

#ifndef OMITBqZ

/* a a a a a a a a */
static void BqZ1()
{
    while(1)
    {
        {
            static stdThreadLock BqZLock = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&BqZLock))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(BqZLock);
            /* a a a a a a */
            printLine("Releasing lock...");
            stdThreadLockRelease(BqZLock);
            printLine("Destroying lock...");
            stdThreadLockDestroy(BqZLock);
        }
        break;
    }
}

void GucOzERMrjxKZSvJUajU_BqZ()
{
    BqZ1();
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
#ifndef OMITBqZ
    printLine("Calling BqZ()...");
    GucOzERMrjxKZSvJUajU_BqZ();
    printLine("Finished BqZ()");
#endif /* a */
#ifndef OMITUmI
    printLine("Calling UmI()...");
    GucOzERMrjxKZSvJUajU_UmI();
    printLine("Finished UmI()");
#endif /* a */
    return 0;
}

#endif
