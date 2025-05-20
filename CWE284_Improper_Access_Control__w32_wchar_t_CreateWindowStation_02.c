/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a
 *    a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )

#ifndef OMITeSE

void IMRlYKvSFrYzIQFncYSp_eSE()
{
    if(1)
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            /* a a a a a a a a a */
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_ALL,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}

#endif /* a */

#ifndef OMITCgK

/* a a a a a a */
static void CgK1()
{
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            /* a a a a a a a a a a a a */
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_READ,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}

/* a a a a a a a a */
static void CgK2()
{
    if(1)
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            /* a a a a a a a a a a a a */
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_READ,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}

void IMRlYKvSFrYzIQFncYSp_CgK()
{
    CgK1();
    CgK2();
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
#ifndef OMITCgK
    printLine("Calling CgK()...");
    IMRlYKvSFrYzIQFncYSp_CgK();
    printLine("Finished CgK()");
#endif /* a */
#ifndef OMITeSE
    printLine("Calling eSE()...");
    IMRlYKvSFrYzIQFncYSp_eSE();
    printLine("Finished eSE()");
#endif /* a */
    return 0;
}

#endif
