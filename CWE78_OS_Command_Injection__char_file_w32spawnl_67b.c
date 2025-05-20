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

#ifdef _WIN32
#define FILENAME "C:\\temp\\file.txt"
#else
#define FILENAME "/tmp/file.txt"
#endif

#include <process.h>

typedef struct _NVnpVOUBjLgosvweOHUS__char_file_w32spawnl_67_structType
{
    char * structFirst;
} NVnpVOUBjLgosvweOHUS__char_file_w32spawnl_67_structType;

#ifndef OMIToym

void qPxZbgDMrLJRIoymgkfL_oymSink(NVnpVOUBjLgosvweOHUS__char_file_w32spawnl_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */

#ifndef OMITEZJ

/* a a a a a a a */
void qPxZbgDMrLJRIoymgkfL_EZJG2BSink(NVnpVOUBjLgosvweOHUS__char_file_w32spawnl_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* a a a a a a a a a a */
    /* a a a a a a a a a a a a */
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}

#endif /* a */
