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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define jux_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define acm_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define jux_OS_COMMAND "ls -la"
#define acm_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

namespace WCjUEDTvHaEINvFQyPph__char_popen_62
{

#ifndef OMITjux

/* a a a */
void juxSource(char * &data);

void jux()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    juxSource(data);
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

#ifndef OMITacm

/* a a a a a a a */
void acmG2BSource(char * &data);

static void acmG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    acmG2BSource(data);
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

void acm()
{
    acmG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

using namespace WCjUEDTvHaEINvFQyPph__char_popen_62; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITacm
    printLine("Calling acm()...");
    acm();
    printLine("Finished acm()");
#endif /* a */
#ifndef OMITjux
    printLine("Calling jux()...");
    jux();
    printLine("Finished jux()");
#endif /* a */
    return 0;
}

#endif
