/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a
 * a  a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITzRZ

void lZRXhDZBtnDKJJMMNmLY_zRZ()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("zRZSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    switch(6)
    {
    case 6:
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a a a a a a */
            _close((int)data);
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITSLO

/* a a a a a a a a a a a a */
static void SLOB2G1()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("zRZSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a */
            CloseHandle(data);
        }
        break;
    }
}

/* a a a a a a a a a a a a a */
static void SLOB2G2()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("zRZSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    switch(6)
    {
    case 6:
        if (data != INVALID_HANDLE_VALUE)
        {
            /* a a a a a a */
            CloseHandle(data);
        }
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void lZRXhDZBtnDKJJMMNmLY_SLO()
{
    SLOB2G1();
    SLOB2G2();
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
#ifndef OMITSLO
    printLine("Calling SLO()...");
    lZRXhDZBtnDKJJMMNmLY_SLO();
    printLine("Finished SLO()");
#endif /* a */
#ifndef OMITzRZ
    printLine("Calling zRZ()...");
    lZRXhDZBtnDKJJMMNmLY_zRZ();
    printLine("Finished zRZ()");
#endif /* a */
    return 0;
}

#endif
