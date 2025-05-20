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

#ifndef OMITLTt

void HbTUbRywsdVEQFGyFkBj_LTt()
{
    if(1)
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

#ifndef OMITKVe

/* a a a a a a */
static void KVe1()
{
    if(0)
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
static void KVe2()
{
    if(1)
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

void HbTUbRywsdVEQFGyFkBj_KVe()
{
    KVe1();
    KVe2();
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
#ifndef OMITKVe
    printLine("Calling KVe()...");
    HbTUbRywsdVEQFGyFkBj_KVe();
    printLine("Finished KVe()");
#endif /* a */
#ifndef OMITLTt
    printLine("Calling LTt()...");
    HbTUbRywsdVEQFGyFkBj_LTt();
    printLine("Finished LTt()");
#endif /* a */
    return 0;
}

#endif
