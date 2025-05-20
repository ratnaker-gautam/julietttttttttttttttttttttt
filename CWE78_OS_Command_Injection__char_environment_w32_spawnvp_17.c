/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define COMMAND_INT_PATH "%WINDIR%\\system32\\cmd.exe"
#define COMMAND_INT "cmd.exe"
#define COMMAND_ARG1 "/c"
#define COMMAND_ARG2 "dir "
#define COMMAND_ARG3 data
#else /* a a */
#include <unistd.h>
#define COMMAND_INT_PATH "/bin/sh"
#define COMMAND_INT "sh"
#define COMMAND_ARG1 "-c"
#define COMMAND_ARG2 "ls "
#define COMMAND_ARG3 data
#endif

#define ENV_VARIABLE "ADD"

#ifdef _WIN32
#define GETENV getenv
#else
#define GETENV getenv
#endif

#include <process.h>

#ifndef OMITlYU

void JAdyqVKjHExrrIBrlkgW_lYU()
{
    int i;
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            /* a a a a a a a a */
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            /* a a a a a a a a */
            if (environment != NULL)
            {
                /* a a a a a a a a */
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

#endif /* a */

#ifndef OMITVOd

/* a a a a a a a a a a a a a a */
static void VOdG2B()
{
    int h;
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        /* a a a a a a a a a / a a */
        strcat(data, "*.*");
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

void JAdyqVKjHExrrIBrlkgW_VOd()
{
    VOdG2B();
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
#ifndef OMITVOd
    printLine("Calling VOd()...");
    JAdyqVKjHExrrIBrlkgW_VOd();
    printLine("Finished VOd()");
#endif /* a */
#ifndef OMITlYU
    printLine("Calling lYU()...");
    JAdyqVKjHExrrIBrlkgW_lYU();
    printLine("Finished lYU()");
#endif /* a */
    return 0;
}

#endif
