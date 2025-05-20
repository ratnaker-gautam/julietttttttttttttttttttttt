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

#ifndef OMIThaa

void bIAwsCuqgJmMnrOvDeJu_haa()
{
    int j;
    for(j = 0; j < 1; j++)
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

#ifndef OMITXKG

/* a a a a a a a a */
static void XKG1()
{
    int k;
    for(k = 0; k < 1; k++)
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

void bIAwsCuqgJmMnrOvDeJu_XKG()
{
    XKG1();
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
#ifndef OMITXKG
    printLine("Calling XKG()...");
    bIAwsCuqgJmMnrOvDeJu_XKG();
    printLine("Finished XKG()");
#endif /* a */
#ifndef OMIThaa
    printLine("Calling haa()...");
    bIAwsCuqgJmMnrOvDeJu_haa();
    printLine("Finished haa()");
#endif /* a */
    return 0;
}

#endif
