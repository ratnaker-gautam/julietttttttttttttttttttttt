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
 * a a a a a a a a
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

/* a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITvYi

void WzAeQRJSuEaqFNezDpNq_vYi()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
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
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMIThsU

/* a a a a a a a a a a a a */
static void hsUG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

/* a a a a a a a a a a a a a a */
static void hsUG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    _wspawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

void WzAeQRJSuEaqFNezDpNq_hsU()
{
    hsUG2B1();
    hsUG2B2();
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
#ifndef OMIThsU
    printLine("Calling hsU()...");
    WzAeQRJSuEaqFNezDpNq_hsU();
    printLine("Finished hsU()");
#endif /* a */
#ifndef OMITvYi
    printLine("Calling vYi()...");
    WzAeQRJSuEaqFNezDpNq_vYi();
    printLine("Finished vYi()");
#endif /* a */
    return 0;
}

#endif
