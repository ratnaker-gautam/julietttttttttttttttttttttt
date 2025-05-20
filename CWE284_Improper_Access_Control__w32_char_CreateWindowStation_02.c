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

#ifndef OMITIeK

void ZktBFcJsiklvAfvEGLWJ_IeK()
{
    if(1)
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

#ifndef OMITxGa

/* a a a a a a */
static void xGa1()
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
static void xGa2()
{
    if(1)
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

void ZktBFcJsiklvAfvEGLWJ_xGa()
{
    xGa1();
    xGa2();
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
#ifndef OMITxGa
    printLine("Calling xGa()...");
    ZktBFcJsiklvAfvEGLWJ_xGa();
    printLine("Finished xGa()");
#endif /* a */
#ifndef OMITIeK
    printLine("Calling IeK()...");
    ZktBFcJsiklvAfvEGLWJ_IeK();
    printLine("Finished IeK()");
#endif /* a */
    return 0;
}

#endif
