/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a
 * a a a
 * a a
 *    a a a a a a
 * a a a a a a a a a a a a a a a a a a a
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

#include <process.h>

#ifndef OMITHtz

void qHmNduSHPijVRtrZImDI_HtzSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

#endif /* a */

#ifndef OMITuEs

/* a a a a a a a */
void qHmNduSHPijVRtrZImDI_uEsG2BSink(void * dataVoidPtr)
{
    /* a a a a a a a a a a */
    char * * dataPtr = (char * *)dataVoidPtr;
    /* a a a a */
    char * data = (*dataPtr);
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        /* a a a a a a a a a a
         * a a a a a a a a */
        /* a a a a a a a a a a a a */
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}

#endif /* a */
