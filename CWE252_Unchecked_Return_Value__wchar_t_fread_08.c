/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

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

#ifndef OMITteH

void NMzHNsjUkkBhDWlWlNEL_teH()
{
    if(staticReturnsTrue())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a a a */
            fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
        }
    }
}

#endif /* a */

#ifndef OMITuqd

/* a a a a a a */
static void uqd1()
{
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

/* a a a a a a a a */
static void uqd2()
{
    if(staticReturnsTrue())
    {
        {
            /* a a a a a a a a a a
             * a a a a a a a a a a a a a a */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* a a a a a */
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}

void NMzHNsjUkkBhDWlWlNEL_uqd()
{
    uqd1();
    uqd2();
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
#ifndef OMITuqd
    printLine("Calling uqd()...");
    NMzHNsjUkkBhDWlWlNEL_uqd();
    printLine("Finished uqd()");
#endif /* a */
#ifndef OMITteH
    printLine("Calling teH()...");
    NMzHNsjUkkBhDWlWlNEL_teH();
    printLine("Finished teH()");
#endif /* a */
    return 0;
}

#endif
