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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )

#ifndef OMITQTB

void AZBvJtQflwulCmuojSmp_QTB()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITOOw

/* a a a a a a */
static void OOw1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}

/* a a a a a a a */
static void OOw2()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void AZBvJtQflwulCmuojSmp_OOw()
{
    OOw1();
    OOw2();
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
#ifndef OMITOOw
    printLine("Calling OOw()...");
    AZBvJtQflwulCmuojSmp_OOw();
    printLine("Finished OOw()");
#endif /* a */
#ifndef OMITQTB
    printLine("Calling QTB()...");
    AZBvJtQflwulCmuojSmp_QTB();
    printLine("Finished QTB()");
#endif /* a */
    return 0;
}

#endif
