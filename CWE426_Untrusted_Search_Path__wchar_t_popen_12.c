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
#define ehz_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define PIZ_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define ehz_OS_COMMAND L"ls -la"
#define PIZ_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITehz

void MKSnFbzcIfDItUjsAqCt_ehz()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a */
        wcscpy(data, ehz_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        wcscpy(data, PIZ_OS_COMMAND);
    }
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

#endif /* a */

#ifndef OMITPIZ

/* a a a a a a a a a a a a
 * a a a a a */
static void PIZG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        wcscpy(data, PIZ_OS_COMMAND);
    }
    else
    {
        /* a a a a a */
        wcscpy(data, PIZ_OS_COMMAND);
    }
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

void MKSnFbzcIfDItUjsAqCt_PIZ()
{
    PIZG2B();
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
#ifndef OMITPIZ
    printLine("Calling PIZ()...");
    MKSnFbzcIfDItUjsAqCt_PIZ();
    printLine("Finished PIZ()");
#endif /* a */
#ifndef OMITehz
    printLine("Calling ehz()...");
    MKSnFbzcIfDItUjsAqCt_ehz();
    printLine("Finished ehz()");
#endif /* a */
    return 0;
}

#endif
