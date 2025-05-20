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
 * a a a a a a
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

#ifndef OMITPuC

void fHMwxCtXHdQEfrhlbXAX_PuC()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
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
    }
    else
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

#endif /* a */

#ifndef OMITerz

/* a a a a a a a a a a a a
 * a a a a a */
static void erzG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    else
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _wspawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

void fHMwxCtXHdQEfrhlbXAX_erz()
{
    erzG2B();
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
#ifndef OMITerz
    printLine("Calling erz()...");
    fHMwxCtXHdQEfrhlbXAX_erz();
    printLine("Finished erz()");
#endif /* a */
#ifndef OMITPuC
    printLine("Calling PuC()...");
    fHMwxCtXHdQEfrhlbXAX_PuC();
    printLine("Finished PuC()");
#endif /* a */
    return 0;
}

#endif
