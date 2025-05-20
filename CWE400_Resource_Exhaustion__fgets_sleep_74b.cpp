/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"
#include <map>

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

using namespace std;

namespace DqkYHZRxUBGBWuIIJoCB__fgets_sleep_74
{

#ifndef OMITvmD

void vmDSink(map<int, int> countMap)
{
    /* a a a a a */
    int count = countMap[2];
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

#endif /* a */

#ifndef OMITScz

/* a a a a a a a */
void SczG2BSink(map<int, int> countMap)
{
    int count = countMap[2];
    /* a a a a a a a a a a a a */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}

/* a a a a a a a */
void SczB2GSink(map<int, int> countMap)
{
    int count = countMap[2];
    /* a a a a a a a a a a a a a */
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}

#endif /* a */

} /* a a */
