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
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITDOn

#include "std_testcase.h"
#include "FyBjACdyDEjTTwRvclEV__wchar_t_environment_w32_execvp_84.h"

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

#include <process.h>
#define EXECVP _wexecvp

namespace FyBjACdyDEjTTwRvclEV__wchar_t_environment_w32_execvp_84
{
MvRHyoNyZTCAXSxcpiAi::MvRHyoNyZTCAXSxcpiAi(wchar_t * dataCopy)
{
    data = dataCopy;
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

MvRHyoNyZTCAXSxcpiAi::~MvRHyoNyZTCAXSxcpiAi()
{
    {
        wchar_t *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        EXECVP(COMMAND_INT, args);
    }
}
}
#endif /* a */
