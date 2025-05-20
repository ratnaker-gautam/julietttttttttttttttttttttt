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

#ifndef OMITDST

void thNhRrYHxRCzjBWjokXe_DST()
{
    if(GLOBAL_CONST_FIVE==5)
    {
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
}

#endif /* a */

#ifndef OMITiOD

/* a a a a a a */
static void iOD1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
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
}

/* a a a a a a a a */
static void iOD2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
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
}

void thNhRrYHxRCzjBWjokXe_iOD()
{
    iOD1();
    iOD2();
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
#ifndef OMITiOD
    printLine("Calling iOD()...");
    thNhRrYHxRCzjBWjokXe_iOD();
    printLine("Finished iOD()");
#endif /* a */
#ifndef OMITDST
    printLine("Calling DST()...");
    thNhRrYHxRCzjBWjokXe_DST();
    printLine("Finished DST()");
#endif /* a */
    return 0;
}

#endif
