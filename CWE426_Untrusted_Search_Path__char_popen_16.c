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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#ifdef _WIN32
#define FJI_OS_COMMAND "cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define qfm_OS_COMMAND "c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define FJI_OS_COMMAND "ls -la"
#define qfm_OS_COMMAND "/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _popen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITFJI

void SBfGdOuVroChutHfNJoV_FJI()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    while(1)
    {
        /* a a a a a a a */
        strcpy(data, FJI_OS_COMMAND);
        break;
    }
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

#ifndef OMITqfm

/* a a a a a a a a a a a a a a */
static void qfmG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    while(1)
    {
        /* a a a a a */
        strcpy(data, qfm_OS_COMMAND);
        break;
    }
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

void SBfGdOuVroChutHfNJoV_qfm()
{
    qfmG2B();
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
#ifndef OMITqfm
    printLine("Calling qfm()...");
    SBfGdOuVroChutHfNJoV_qfm();
    printLine("Finished qfm()");
#endif /* a */
#ifndef OMITFJI
    printLine("Calling FJI()...");
    SBfGdOuVroChutHfNJoV_FJI();
    printLine("Finished FJI()");
#endif /* a */
    return 0;
}

#endif
