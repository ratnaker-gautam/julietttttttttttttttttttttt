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

#ifndef OMITSOf

void qldKzBbNQxmlnciOGvgm_SOf()
{
    if(5==5)
    {
        {
            HDESK hDesk;
            char * desktopName = "DesktopExample";
            /* a a a a a a a a a */
            hDesk = CreateDesktopA(
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

#ifndef OMITlAt

/* a a a a a a */
static void lAt1()
{
    if(5!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HDESK hDesk;
            char * desktopName = "DesktopExample";
            /* a a a a a a a a a a a a */
            hDesk = CreateDesktopA(
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
static void lAt2()
{
    if(5==5)
    {
        {
            HDESK hDesk;
            char * desktopName = "DesktopExample";
            /* a a a a a a a a a a a a */
            hDesk = CreateDesktopA(
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

void qldKzBbNQxmlnciOGvgm_lAt()
{
    lAt1();
    lAt2();
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
#ifndef OMITlAt
    printLine("Calling lAt()...");
    qldKzBbNQxmlnciOGvgm_lAt();
    printLine("Finished lAt()");
#endif /* a */
#ifndef OMITSOf
    printLine("Calling SOf()...");
    qldKzBbNQxmlnciOGvgm_SOf();
    printLine("Finished SOf()");
#endif /* a */
    return 0;
}

#endif
