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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )

#ifndef OMITwSe

void oeZgiqnEBZVChGjeZvYf_wSe()
{
    if(globalTrue)
    {
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
}

#endif /* a */

#ifndef OMITjzH

/* a a a a a a */
static void jzH1()
{
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a */
static void jzH2()
{
    if(globalTrue)
    {
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
}

void oeZgiqnEBZVChGjeZvYf_jzH()
{
    jzH1();
    jzH2();
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
#ifndef OMITjzH
    printLine("Calling jzH()...");
    oeZgiqnEBZVChGjeZvYf_jzH();
    printLine("Finished jzH()");
#endif /* a */
#ifndef OMITwSe
    printLine("Calling wSe()...");
    oeZgiqnEBZVChGjeZvYf_wSe();
    printLine("Finished wSe()");
#endif /* a */
    return 0;
}

#endif
