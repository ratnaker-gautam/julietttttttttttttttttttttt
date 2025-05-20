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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>
#pragma comment( lib, "user32" )

#ifndef OMITSEG

void PeEhUYttPtIRlCCWlMEt_SEG()
{
    while(1)
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
        break;
    }
}

#endif /* a */

#ifndef OMITAgM

/* a a a a a a a a */
static void AgM1()
{
    while(1)
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
        break;
    }
}

void PeEhUYttPtIRlCCWlMEt_AgM()
{
    AgM1();
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
#ifndef OMITAgM
    printLine("Calling AgM()...");
    PeEhUYttPtIRlCCWlMEt_AgM();
    printLine("Finished AgM()");
#endif /* a */
#ifndef OMITSEG
    printLine("Calling SEG()...");
    PeEhUYttPtIRlCCWlMEt_SEG();
    printLine("Finished SEG()");
#endif /* a */
    return 0;
}

#endif
