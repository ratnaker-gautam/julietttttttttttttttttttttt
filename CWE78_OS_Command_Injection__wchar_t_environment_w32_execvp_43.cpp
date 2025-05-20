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
 * a a a a a a a a a a a a a a a a a a a a a
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

#include <process.h>
#define EXECVP _wexecvp

namespace cjtgrSRqthiNyPVCqQWg
{

#ifndef OMITGDA

static void GDASource(wchar_t * &data)
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

void GDA()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    GDASource(data);
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

#endif /* a */

#ifndef OMITgan

/* a a a a a a a */
static void ganG2BSource(wchar_t * &data)
{
    /* a a a a a a a a a / a a */
    wcscat(data, L"*.*");
}

static void ganG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    ganG2BSource(data);
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

void gan()
{
    ganG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

using namespace cjtgrSRqthiNyPVCqQWg; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITgan
    printLine("Calling gan()...");
    gan();
    printLine("Finished gan()");
#endif /* a */
#ifndef OMITGDA
    printLine("Calling GDA()...");
    GDA();
    printLine("Finished GDA()");
#endif /* a */
    return 0;
}

#endif
