/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a
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

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

#ifdef _WIN32
#include <process.h>
#define EXECLP _wexeclp
#else /* a a */
#define EXECLP execlp
#endif

#ifndef OMITMfl

void epMNZQIhnPBofaQRBQjd_Mfl()
{
    int i;
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            /* a a a a a a a a */
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            /* a a a a a a a a */
            if (environment != NULL)
            {
                /* a a a a a a a a */
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMITcCB

/* a a a a a a a a a a a a a a */
static void cCBG2B()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a a a / a a */
        wcscat(data, L"*.*");
    }
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

void epMNZQIhnPBofaQRBQjd_cCB()
{
    cCBG2B();
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
#ifndef OMITcCB
    printLine("Calling cCB()...");
    epMNZQIhnPBofaQRBQjd_cCB();
    printLine("Finished cCB()");
#endif /* a */
#ifndef OMITMfl
    printLine("Calling Mfl()...");
    epMNZQIhnPBofaQRBQjd_Mfl();
    printLine("Finished Mfl()");
#endif /* a */
    return 0;
}

#endif
