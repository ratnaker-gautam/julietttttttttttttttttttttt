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
#define fgY_OS_COMMAND L"cmd.exe /c dir"

/* a a
 * a a a a a a a a a a a a
 * a a a a/a/a a a a a a a a
 * a a a a a a a a a a
 * a a a a a a a a a a a
 */
#define VIW_OS_COMMAND L"c:\\windows\\system32\\cmd.exe /c dir"
#else /* a a */
#define fgY_OS_COMMAND L"ls -la"
#define VIW_OS_COMMAND L"/usr/bin/ls -la"
#endif /* a a a */

#ifdef _WIN32
#define POPEN _wpopen
#define PCLOSE _pclose
#else /* a a */
#define POPEN popen
#define PCLOSE pclose
#endif

#ifndef OMITfgY

/* a a a a a a a a a a a a a a */
int fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgYGlobal = 0;

wchar_t * fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgYSource(wchar_t * data);

void fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgY()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgYGlobal = 1; /* a */
    data = fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgYSource(data);
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

#ifndef OMITVIW

/* a a a a a a a a a a a a a a */
int fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B1Global = 0;
int fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
wchar_t * fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B1Source(wchar_t * data);

static void VIWG2B1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B1Global = 0; /* a */
    data = fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B1Source(data);
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

/* a a a a a a a a a a a a a a a a a */
wchar_t * fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B2Source(wchar_t * data);

static void VIWG2B2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B2Global = 1; /* a */
    data = fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIWG2B2Source(data);
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

void fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIW()
{
    VIWG2B1();
    VIWG2B2();
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
#ifndef OMITVIW
    printLine("Calling VIW()...");
    fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_VIW();
    printLine("Finished VIW()");
#endif /* a */
#ifndef OMITfgY
    printLine("Calling fgY()...");
    fbCstYFiEeWkqbqDAhuT__wchar_t_popen_22_fgY();
    printLine("Finished fgY()");
#endif /* a */
    return 0;
}

#endif
