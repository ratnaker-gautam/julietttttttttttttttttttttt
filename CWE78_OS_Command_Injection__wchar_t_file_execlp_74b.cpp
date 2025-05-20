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

#ifdef _WIN32
#include <process.h>
#define EXECLP _wexeclp
#else /* a a */
#define EXECLP execlp
#endif

using namespace std;

namespace mIgMLYDfQrOapbDcSwuD__wchar_t_file_execlp_74
{

#ifndef OMITqtY

void qtYSink(map<int, wchar_t *> dataMap)
{
    /* a a a a a */
    wchar_t * data = dataMap[2];
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMITBeQ

/* a a a a a a a */
void BeQG2BSink(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    /* a a a a a a a a a a
     * a a a a a a a a */
    /* a a a a a a a a a a a a */
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

} /* a a */
