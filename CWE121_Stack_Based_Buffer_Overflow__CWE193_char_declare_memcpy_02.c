/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING "AAAAAAAAAA"

#ifndef OMITUJl

void ZvwNaylGCZdxBOMiZufJ_UJl()
{
    char * data;
    char dataUJlBuffer[10];
    char datahtnBuffer[10+1];
    if(1)
    {
        /* a a a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataUJlBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

#endif /* a */

#ifndef OMIThtn

/* a a a a a a a a a a a a */
static void htnG2B1()
{
    char * data;
    char dataUJlBuffer[10];
    char datahtnBuffer[10+1];
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datahtnBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void htnG2B2()
{
    char * data;
    char dataUJlBuffer[10];
    char datahtnBuffer[10+1];
    if(1)
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = datahtnBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

void ZvwNaylGCZdxBOMiZufJ_htn()
{
    htnG2B1();
    htnG2B2();
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
#ifndef OMIThtn
    printLine("Calling htn()...");
    ZvwNaylGCZdxBOMiZufJ_htn();
    printLine("Finished htn()");
#endif /* a */
#ifndef OMITUJl
    printLine("Calling UJl()...");
    ZvwNaylGCZdxBOMiZufJ_UJl();
    printLine("Finished UJl()");
#endif /* a */
    return 0;
}

#endif
