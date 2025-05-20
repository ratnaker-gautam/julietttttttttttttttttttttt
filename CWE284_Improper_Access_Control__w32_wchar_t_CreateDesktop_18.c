/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a
 *    a a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )

#ifndef OMITBFx

void XXqNmrEGwiAvcpdEOHdP_BFx()
{
    goto sink;
sink:
    {
        HDESK hDesk;
        wchar_t * desktopName = L"DesktopExample";
        /* a a a a a a a a a */
        hDesk = CreateDesktopW(
                    desktopName,
                    NULL,
                    NULL,
                    0,
                    GENERIC_ALL,
                    NULL);
        if (hDesk == NULL)
        {
            printLine("Desktop could not be created");
        }
        else
        {
            printLine("Desktop created successfully");
            CloseDesktop(hDesk);
        }
    }
}

#endif /* a */

#ifndef OMITnVz

/* a a a a a a a a */
static void nVz1()
{
    goto sink;
sink:
    {
        HDESK hDesk;
        wchar_t * desktopName = L"DesktopExample";
        /* a a a a a a a a a a a a */
        hDesk = CreateDesktopW(
                    desktopName,
                    NULL,
                    NULL,
                    0,
                    GENERIC_READ,
                    NULL);
        if (hDesk == NULL)
        {
            printLine("Desktop could not be created");
        }
        else
        {
            printLine("Desktop created successfully");
            CloseDesktop(hDesk);
        }
    }
}

void XXqNmrEGwiAvcpdEOHdP_nVz()
{
    nVz1();
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
#ifndef OMITnVz
    printLine("Calling nVz()...");
    XXqNmrEGwiAvcpdEOHdP_nVz();
    printLine("Finished nVz()");
#endif /* a */
#ifndef OMITBFx
    printLine("Calling BFx()...");
    XXqNmrEGwiAvcpdEOHdP_BFx();
    printLine("Finished BFx()");
#endif /* a */
    return 0;
}

#endif
