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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define uuM_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define JLc_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define uuM_OS_COMMAND "ls -la"
#define JLc_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

typedef union
{
    char * unionFirst;
    char * unionSecond;
} RmxZWORUEAyLKvhwVPgh_unionType;

#ifndef OMITuuM

void RmxZWORUEAyLKvhwVPgh_uuM()
{
    char * data;
    RmxZWORUEAyLKvhwVPgh_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a */
    strcpy(data, uuM_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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

#ifndef OMITJLc

/* a a a a a a a */
static void JLcG2B()
{
    char * data;
    RmxZWORUEAyLKvhwVPgh_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a */
    strcpy(data, JLc_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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

void RmxZWORUEAyLKvhwVPgh_JLc()
{
    JLcG2B();
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
#ifndef OMITJLc
    printLine("Calling JLc()...");
    RmxZWORUEAyLKvhwVPgh_JLc();
    printLine("Finished JLc()");
#endif /* a */
#ifndef OMITuuM
    printLine("Calling uuM()...");
    RmxZWORUEAyLKvhwVPgh_uuM();
    printLine("Finished uuM()");
#endif /* a */
    return 0;
}

#endif
