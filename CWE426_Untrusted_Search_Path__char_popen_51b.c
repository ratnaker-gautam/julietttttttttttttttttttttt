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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define RWm_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define nab_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define RWm_OS_COMMAND "ls -la"
#define nab_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

/* a a a a a a a a a a a a a a a a a a a a */

#ifndef OMITRWm

void xQCKONpObdxNZpBnuiSy_RWmSink(char * data)
{
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

#endif /* a */

#ifndef OMITnab

/* a a a a a a a */
void xQCKONpObdxNZpBnuiSy_nabG2BSink(char * data)
{
    {
        FILE *pipe;
        /* a a a a a a a a a a a a a a
         * a a a a a a a a a */
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

#endif /* a */
