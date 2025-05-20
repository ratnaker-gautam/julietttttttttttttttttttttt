/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define COMMAND_INT_PATH L"%WINDIR%\\system32\\cmd.exe"
#define COMMAND_INT L"cmd.exe"
#define COMMAND_ARG1 L"/c"
#define COMMAND_ARG2 L"dir "
#define COMMAND_ARG3 data
#else /* a a */
#include <unistd.h>
#define COMMAND_INT_PATH L"/bin/sh"
#define COMMAND_INT L"sh"
#define COMMAND_ARG1 L"-c"
#define COMMAND_ARG2 L"ls "
#define COMMAND_ARG3 data
#endif

#include <process.h>
#define EXECVP _wexecvp

static wchar_t * fsOtWoCIJVjNOIyKwtXZ_DtdData;
static wchar_t * fsOtWoCIJVjNOIyKwtXZ_EurG2BData;

#ifndef OMITDtd

static void DtdSink()
{
    wchar_t * data = fsOtWoCIJVjNOIyKwtXZ_DtdData;
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

void fsOtWoCIJVjNOIyKwtXZ_Dtd()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = wcslen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                /* a a a a a a */
                data[dataLen] = L'\0';
            }
        }
    }
    fsOtWoCIJVjNOIyKwtXZ_DtdData = data;
    DtdSink();
}

#endif /* a */

#ifndef OMITEur

/* a a a a a a a */
static void EurG2BSink()
{
    wchar_t * data = fsOtWoCIJVjNOIyKwtXZ_EurG2BData;
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

static void EurG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    /* a a a a a a a a a / a a */
    wcscat(data, L"*.*");
    fsOtWoCIJVjNOIyKwtXZ_EurG2BData = data;
    EurG2BSink();
}

void fsOtWoCIJVjNOIyKwtXZ_Eur()
{
    EurG2B();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITEur
    printLine("Calling Eur()...");
    fsOtWoCIJVjNOIyKwtXZ_Eur();
    printLine("Finished Eur()");
#endif /* a */
#ifndef OMITDtd
    printLine("Calling Dtd()...");
    fsOtWoCIJVjNOIyKwtXZ_Dtd();
    printLine("Finished Dtd()");
#endif /* a */
    return 0;
}

#endif
