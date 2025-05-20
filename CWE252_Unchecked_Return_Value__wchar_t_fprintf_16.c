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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITFZw

void QALiCnDklnitzmQtzXZP_FZw()
{
    while(1)
    {
        /* a a a a a a a */
        fwprintf(stdout, L"%s\n", L"string");
        break;
    }
}

#endif /* a */

#ifndef OMITyIL

/* a a a a a a a a */
static void yIL1()
{
    while(1)
    {
        /* a a a a a */
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
        break;
    }
}

void QALiCnDklnitzmQtzXZP_yIL()
{
    yIL1();
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
#ifndef OMITyIL
    printLine("Calling yIL()...");
    QALiCnDklnitzmQtzXZP_yIL();
    printLine("Finished yIL()");
#endif /* a */
#ifndef OMITFZw
    printLine("Calling FZw()...");
    QALiCnDklnitzmQtzXZP_FZw();
    printLine("Finished FZw()");
#endif /* a */
    return 0;
}

#endif
