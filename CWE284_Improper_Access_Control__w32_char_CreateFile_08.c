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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITTdN

void XYaOkOssxnaZrKmfLEFZ_TdN()
{
    if(staticReturnsTrue())
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
}

#endif /* a */

#ifndef OMITyTM

/* a a a a a a */
static void yTM1()
{
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
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
}

/* a a a a a a a a */
static void yTM2()
{
    if(staticReturnsTrue())
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
}

void XYaOkOssxnaZrKmfLEFZ_yTM()
{
    yTM1();
    yTM2();
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
#ifndef OMITyTM
    printLine("Calling yTM()...");
    XYaOkOssxnaZrKmfLEFZ_yTM();
    printLine("Finished yTM()");
#endif /* a */
#ifndef OMITTdN
    printLine("Calling TdN()...");
    XYaOkOssxnaZrKmfLEFZ_TdN();
    printLine("Finished TdN()");
#endif /* a */
    return 0;
}

#endif
