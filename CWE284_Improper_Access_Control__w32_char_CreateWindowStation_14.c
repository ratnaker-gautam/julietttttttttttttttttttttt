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

#ifndef OMITPyl

void QtdLmlPsAWavQIkLZoag_Pyl()
{
    if(globalFive==5)
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

#ifndef OMITGcI

/* a a a a a a */
static void GcI1()
{
    if(globalFive!=5)
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
static void GcI2()
{
    if(globalFive==5)
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

void QtdLmlPsAWavQIkLZoag_GcI()
{
    GcI1();
    GcI2();
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
#ifndef OMITGcI
    printLine("Calling GcI()...");
    QtdLmlPsAWavQIkLZoag_GcI();
    printLine("Finished GcI()");
#endif /* a */
#ifndef OMITPyl
    printLine("Calling Pyl()...");
    QtdLmlPsAWavQIkLZoag_Pyl();
    printLine("Finished Pyl()");
#endif /* a */
    return 0;
}

#endif
