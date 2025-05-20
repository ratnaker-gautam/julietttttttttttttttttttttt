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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITodp

void fxlUGWIiCqkmzeRobtLG_odp()
{
    {
        HANDLE hFile;
        char * fileName = "C:\\temp\\file.txt";
        /* a a a a a a a a a */
        hFile = CreateFileA(
                    fileName,
                    FILE_ALL_ACCESS,
                    FILE_SHARE_READ,
                    NULL,
                    CREATE_NEW,
                    FILE_ATTRIBUTE_NORMAL,
                    NULL);
        if (hFile == INVALID_HANDLE_VALUE)
        {
            printLine("File could not be created");
        }
        else
        {
            printLine("File created successfully");
            CloseHandle(hFile);
        }
    }
}

#endif /* a */

#ifndef OMITZGd

static void ZGd1()
{
    {
        HANDLE hFile;
        char * fileName = "C:\\temp\\file.txt";
        /* a a a a a a a a a a a a */
        hFile = CreateFileA(
                    fileName,
                    GENERIC_READ,
                    FILE_SHARE_READ,
                    NULL,
                    CREATE_NEW,
                    FILE_ATTRIBUTE_NORMAL,
                    NULL);
        if (hFile == INVALID_HANDLE_VALUE)
        {
            printLine("File could not be created");
        }
        else
        {
            printLine("File created successfully");
            CloseHandle(hFile);
        }
    }
}

void fxlUGWIiCqkmzeRobtLG_ZGd()
{
    ZGd1();
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
#ifndef OMITZGd
    printLine("Calling ZGd()...");
    fxlUGWIiCqkmzeRobtLG_ZGd();
    printLine("Finished ZGd()");
#endif /* a */
#ifndef OMITodp
    printLine("Calling odp()...");
    fxlUGWIiCqkmzeRobtLG_odp();
    printLine("Finished odp()");
#endif /* a */
    return 0;
}

#endif
