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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITgjN

void fIMZGzYyscRYRqfIEwtD_gjN()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("gjNSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if (data != INVALID_HANDLE_VALUE)
    {
        /* a a a a a a a a a a a */
        fclose((FILE *)data);
    }
}

#endif /* a */

#ifndef OMITAIa

/* a a a a a a a */
static void AIaB2G()
{
    HANDLE data;
    /* a a */
    data = INVALID_HANDLE_VALUE;
    /* a a a a a a a a a a a a a a a a a */
    data = CreateFile("gjNSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if (data != INVALID_HANDLE_VALUE)
    {
        /* a a a a a a */
        CloseHandle(data);
    }
}

void fIMZGzYyscRYRqfIEwtD_AIa()
{
    AIaB2G();
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
#ifndef OMITAIa
    printLine("Calling AIa()...");
    fIMZGzYyscRYRqfIEwtD_AIa();
    printLine("Finished AIa()");
#endif /* a */
#ifndef OMITgjN
    printLine("Calling gjN()...");
    fIMZGzYyscRYRqfIEwtD_gjN();
    printLine("Finished gjN()");
#endif /* a */
    return 0;
}

#endif
