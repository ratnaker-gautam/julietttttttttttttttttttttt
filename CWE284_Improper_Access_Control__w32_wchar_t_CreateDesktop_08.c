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

#ifndef OMITuLE

void qdpOGqNPMDIKDKkvEjHK_uLE()
{
    if(staticReturnsTrue())
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

#ifndef OMITcYB

/* a a a a a a */
static void cYB1()
{
    if(staticReturnsFalse())
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
static void cYB2()
{
    if(staticReturnsTrue())
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

void qdpOGqNPMDIKDKkvEjHK_cYB()
{
    cYB1();
    cYB2();
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
#ifndef OMITcYB
    printLine("Calling cYB()...");
    qdpOGqNPMDIKDKkvEjHK_cYB();
    printLine("Finished cYB()");
#endif /* a */
#ifndef OMITuLE
    printLine("Calling uLE()...");
    qdpOGqNPMDIKDKkvEjHK_uLE();
    printLine("Finished uLE()");
#endif /* a */
    return 0;
}

#endif
