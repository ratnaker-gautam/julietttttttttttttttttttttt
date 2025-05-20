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

/* a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a
 */
static int staticFive = 5;

#ifndef OMITOjC

void pjUIzOCbqapCkcvVgFht_OjC()
{
    char * data;
    char * dataOjCBuffer = (char *)ALLOCA((10)*sizeof(char));
    char * dataLaIBuffer = (char *)ALLOCA((10+1)*sizeof(char));
    if(staticFive==5)
    {
        /* a a a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataOjCBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITLaI

/* a a a a a a a a a a a a */
static void LaIG2B1()
{
    char * data;
    char * dataOjCBuffer = (char *)ALLOCA((10)*sizeof(char));
    char * dataLaIBuffer = (char *)ALLOCA((10+1)*sizeof(char));
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataLaIBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void LaIG2B2()
{
    char * data;
    char * dataOjCBuffer = (char *)ALLOCA((10)*sizeof(char));
    char * dataLaIBuffer = (char *)ALLOCA((10+1)*sizeof(char));
    if(staticFive==5)
    {
        /* a a a a a a a a a a a a a a a a
         * a a a a a  */
        data = dataLaIBuffer;
        data[0] = '\0'; /* a a */
    }
    {
        char source[10+1] = SRC_STRING;
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}

void pjUIzOCbqapCkcvVgFht_LaI()
{
    LaIG2B1();
    LaIG2B2();
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
#ifndef OMITLaI
    printLine("Calling LaI()...");
    pjUIzOCbqapCkcvVgFht_LaI();
    printLine("Finished LaI()");
#endif /* a */
#ifndef OMITOjC
    printLine("Calling OjC()...");
    pjUIzOCbqapCkcvVgFht_OjC();
    printLine("Finished OjC()");
#endif /* a */
    return 0;
}

#endif
