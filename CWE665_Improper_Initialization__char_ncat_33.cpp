/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace GlTvQCulRVTpsxhBJpqI
{

#ifndef OMITCOZ

void COZ()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    {
        char * data = dataRef;
        {
            size_t sourceLen;
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            sourceLen = strlen(source);
            /* a a a a a a a a a a a a a */
            strncat(data, source, sourceLen);
            printLine(data);
        }
    }
}

#endif /* a */

#ifndef OMITfry

/* a a a a a a a */
static void fryG2B()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = '\0'; /* a a */
    {
        char * data = dataRef;
        {
            size_t sourceLen;
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            sourceLen = strlen(source);
            /* a a a a a a a a a a a a a */
            strncat(data, source, sourceLen);
            printLine(data);
        }
    }
}

void fry()
{
    fryG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */
#ifdef INCLUDEMAIN

using namespace GlTvQCulRVTpsxhBJpqI; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITfry
    printLine("Calling fry()...");
    fry();
    printLine("Finished fry()");
#endif /* a */
#ifndef OMITCOZ
    printLine("Calling COZ()...");
    COZ();
    printLine("Finished COZ()");
#endif /* a */
    return 0;
}

#endif
