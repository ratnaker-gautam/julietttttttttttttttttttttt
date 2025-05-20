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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define bZp_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define aJY_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define bZp_OS_COMMAND "ls -la"
#define aJY_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

static char * nNfiXgsVyDpRhQMLhiEv_bZpData;
static char * nNfiXgsVyDpRhQMLhiEv_aJYG2BData;

#ifndef OMITbZp

static void bZpSink()
{
    char * data = nNfiXgsVyDpRhQMLhiEv_bZpData;
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

void nNfiXgsVyDpRhQMLhiEv_bZp()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a */
    strcpy(data, bZp_OS_COMMAND);
    nNfiXgsVyDpRhQMLhiEv_bZpData = data;
    bZpSink();
}

#endif /* a */

#ifndef OMITaJY

/* a a a a a a a */
static void aJYG2BSink()
{
    char * data = nNfiXgsVyDpRhQMLhiEv_aJYG2BData;
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

static void aJYG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a */
    strcpy(data, aJY_OS_COMMAND);
    nNfiXgsVyDpRhQMLhiEv_aJYG2BData = data;
    aJYG2BSink();
}

void nNfiXgsVyDpRhQMLhiEv_aJY()
{
    aJYG2B();
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
#ifndef OMITaJY
    printLine("Calling aJY()...");
    nNfiXgsVyDpRhQMLhiEv_aJY();
    printLine("Finished aJY()");
#endif /* a */
#ifndef OMITbZp
    printLine("Calling bZp()...");
    nNfiXgsVyDpRhQMLhiEv_bZp();
    printLine("Finished bZp()");
#endif /* a */
    return 0;
}

#endif
