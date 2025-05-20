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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <windows.h>

#ifndef OMITdEO

void mWcFTkkRVZIaSrLIZaai_dEO()
{
    goto sink;
sink:
    {
        HANDLE hFile;
        wchar_t * fileName = L"C:\\temp\\file.txt";
        /* a a a a a a a a a */
        hFile = CreateFileW(
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

#ifndef OMITvUL

/* a a a a a a a a */
static void vUL1()
{
    goto sink;
sink:
    {
        HANDLE hFile;
        wchar_t * fileName = L"C:\\temp\\file.txt";
        /* a a a a a a a a a a a a */
        hFile = CreateFileW(
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

void mWcFTkkRVZIaSrLIZaai_vUL()
{
    vUL1();
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
#ifndef OMITvUL
    printLine("Calling vUL()...");
    mWcFTkkRVZIaSrLIZaai_vUL();
    printLine("Finished vUL()");
#endif /* a */
#ifndef OMITdEO
    printLine("Calling dEO()...");
    mWcFTkkRVZIaSrLIZaai_dEO();
    printLine("Finished dEO()");
#endif /* a */
    return 0;
}

#endif
