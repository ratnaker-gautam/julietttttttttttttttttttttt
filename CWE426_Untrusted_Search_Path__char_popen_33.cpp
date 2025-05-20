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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define pqd_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define olY_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define pqd_OS_COMMAND "ls -la"
#define olY_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

namespace lawGPFXfIfhGkzjZCJFp
{

#ifndef OMITpqd

void pqd()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a */
    strcpy(data, pqd_OS_COMMAND);
    {
        char * data = dataRef;
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

#ifndef OMITolY

/* a a a a a a a */
static void olYG2B()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a */
    strcpy(data, olY_OS_COMMAND);
    {
        char * data = dataRef;
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

void olY()
{
    olYG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

using namespace lawGPFXfIfhGkzjZCJFp; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITolY
    printLine("Calling olY()...");
    olY();
    printLine("Finished olY()");
#endif /* a */
#ifndef OMITpqd
    printLine("Calling pqd()...");
    pqd();
    printLine("Finished pqd()");
#endif /* a */
    return 0;
}

#endif
