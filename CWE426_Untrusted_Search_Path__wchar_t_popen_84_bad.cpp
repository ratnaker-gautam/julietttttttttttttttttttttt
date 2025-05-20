/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITulv

#include "std_testcase.h"
#include "sDJIqEIMDmnVKIbyYfAs__wchar_t_popen_84.h"

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

namespace sDJIqEIMDmnVKIbyYfAs__wchar_t_popen_84
{
EeGcedlqAWjRHfyDlDwj::EeGcedlqAWjRHfyDlDwj(wchar_t * dataCopy)
{
    data = dataCopy;
    /* a a a a a a a */
    wcscpy(data, ulv_OS_COMMAND);
}

EeGcedlqAWjRHfyDlDwj::~EeGcedlqAWjRHfyDlDwj()
{
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
}
#endif /* a */
