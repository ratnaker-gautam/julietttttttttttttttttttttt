/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITteq

#include "std_testcase.h"
#include "UBGLkdSZCfQaoocGVlQq__rand_sleep_83.h"

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

namespace UBGLkdSZCfQaoocGVlQq__rand_sleep_83
{
OLVWkseTqoiwuNTiMzpb::OLVWkseTqoiwuNTiMzpb(int countCopy)
{
    count = countCopy;
    /* a a a a a a a a */
    count = RAND32();
}

OLVWkseTqoiwuNTiMzpb::~OLVWkseTqoiwuNTiMzpb()
{
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
}
#endif /* a */
