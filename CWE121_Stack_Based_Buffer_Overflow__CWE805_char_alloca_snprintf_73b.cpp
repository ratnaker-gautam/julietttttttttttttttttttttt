/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"
#include <list>

#include <wchar.h>

#ifdef _WIN32
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif

using namespace std;

namespace XPICkUMxkHzNNeIlqfnO_char_alloca_snprintf_73
{

#ifndef OMITjHO

void jHOSink(list<char *> dataList)
{
    /* a a a a a */
    char * data = dataList.back();
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITShR

/* a a a a a a a */
void ShRG2BSink(list<char *> dataList)
{
    char * data = dataList.back();
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a a a a a */
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
    }
}

#endif /* a */

} /* a a */
