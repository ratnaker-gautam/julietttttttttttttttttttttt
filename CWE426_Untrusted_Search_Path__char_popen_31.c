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
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define CTv_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define UZt_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define CTv_OS_COMMAND "ls -la"
#define UZt_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITCTv

void GKWqdtdzerJCpuFvTkcs_CTv()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a */
    strcpy(data, CTv_OS_COMMAND);
    {
        char * dataCopy = data;
        char * data = dataCopy;
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
}

#endif /* a */

#ifndef OMITUZt

/* a a a a a a a */
static void UZtG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a */
    strcpy(data, UZt_OS_COMMAND);
    {
        char * dataCopy = data;
        char * data = dataCopy;
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
}

void GKWqdtdzerJCpuFvTkcs_UZt()
{
    UZtG2B();
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
#ifndef OMITUZt
    printLine("Calling UZt()...");
    GKWqdtdzerJCpuFvTkcs_UZt();
    printLine("Finished UZt()");
#endif /* a */
#ifndef OMITCTv
    printLine("Calling CTv()...");
    GKWqdtdzerJCpuFvTkcs_CTv();
    printLine("Finished CTv()");
#endif /* a */
    return 0;
}

#endif
