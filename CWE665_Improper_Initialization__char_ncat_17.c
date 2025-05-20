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
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITZEi

void YpSBiNsjCwPPjYSilIUh_ZEi()
{
    int i;
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
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

#endif /* a */

#ifndef OMITUSD

/* a a a a a a a a a a a a a a */
static void USDG2B()
{
    int h;
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        /* a a a a */
        data[0] = '\0'; /* a a */
    }
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

void YpSBiNsjCwPPjYSilIUh_USD()
{
    USDG2B();
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
#ifndef OMITUSD
    printLine("Calling USD()...");
    YpSBiNsjCwPPjYSilIUh_USD();
    printLine("Finished USD()");
#endif /* a */
#ifndef OMITZEi
    printLine("Calling ZEi()...");
    YpSBiNsjCwPPjYSilIUh_ZEi();
    printLine("Finished ZEi()");
#endif /* a */
    return 0;
}

#endif
