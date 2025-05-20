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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"
#include <map>

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

using namespace std;

namespace zWUTNKJnILXgNGhFbToo__wchar_t_console_w32_execvp_74
{

#ifndef OMITlPc

void lPcSink(map<int, wchar_t *> dataMap)
{
    /* a a a a a */
    wchar_t * data = dataMap[2];
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

#endif /* a */

#ifndef OMITfYs

/* a a a a a a a */
void fYsG2BSink(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}

#endif /* a */

} /* a a */
