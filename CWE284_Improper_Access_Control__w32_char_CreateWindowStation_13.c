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

#ifndef OMITMoC

void oEBsJpyHzRzOalaSABjh_MoC()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            /* a a a a a a a a a */
            hWinStation = CreateWindowStationA(
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

#ifndef OMITbbq

/* a a a a a a */
static void bbq1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            /* a a a a a a a a a a a a */
            hWinStation = CreateWindowStationA(
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
static void bbq2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            /* a a a a a a a a a a a a */
            hWinStation = CreateWindowStationA(
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

void oEBsJpyHzRzOalaSABjh_bbq()
{
    bbq1();
    bbq2();
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
#ifndef OMITbbq
    printLine("Calling bbq()...");
    oEBsJpyHzRzOalaSABjh_bbq();
    printLine("Finished bbq()");
#endif /* a */
#ifndef OMITMoC
    printLine("Calling MoC()...");
    oEBsJpyHzRzOalaSABjh_MoC();
    printLine("Finished MoC()");
#endif /* a */
    return 0;
}

#endif
