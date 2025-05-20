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
 * a a a a a a a a a a a a a a a a
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
#define EXECL _wexecl
#else /* a a */
#define EXECL execl
#endif

#ifndef OMITwNJ

/* a a a */
wchar_t * DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61b_wNJSource(wchar_t * data);

void DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61_wNJ()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61b_wNJSource(data);
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMIThZh

/* a a a a a a a */
wchar_t * DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61b_hZhG2BSource(wchar_t * data);

static void hZhG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61b_hZhG2BSource(data);
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

void DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61_hZh()
{
    hZhG2B();
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
#ifndef OMIThZh
    printLine("Calling hZh()...");
    DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61_hZh();
    printLine("Finished hZh()");
#endif /* a */
#ifndef OMITwNJ
    printLine("Calling wNJ()...");
    DkjOQovlxpxJDffhsYCm__wchar_t_environment_execl_61_wNJ();
    printLine("Finished wNJ()");
#endif /* a */
    return 0;
}

#endif
