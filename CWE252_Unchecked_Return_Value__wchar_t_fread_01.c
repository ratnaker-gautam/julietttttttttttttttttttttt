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
 * a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITkHY

void jibUeQJRHzeHGemYGtnG_kHY()
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

#endif /* a */

#ifndef OMITtnd

static void tnd1()
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

void jibUeQJRHzeHGemYGtnG_tnd()
{
    tnd1();
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
#ifndef OMITtnd
    printLine("Calling tnd()...");
    jibUeQJRHzeHGemYGtnG_tnd();
    printLine("Finished tnd()");
#endif /* a */
#ifndef OMITkHY
    printLine("Calling kHY()...");
    jibUeQJRHzeHGemYGtnG_kHY();
    printLine("Finished kHY()");
#endif /* a */
    return 0;
}

#endif
