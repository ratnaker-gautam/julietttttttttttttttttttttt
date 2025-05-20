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

#ifndef OMITkuZ

void xAWyVxpNglOKUFbiVeiM_kuZ()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    /* a a a a a */
    ; /* a a a a a a a */
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

#ifndef OMITRyj

/* a a a a a a a a a a a a a a */
static void RyjG2B()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    /* a a a a */
    data[0] = '\0'; /* a a */
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

void xAWyVxpNglOKUFbiVeiM_Ryj()
{
    RyjG2B();
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
#ifndef OMITRyj
    printLine("Calling Ryj()...");
    xAWyVxpNglOKUFbiVeiM_Ryj();
    printLine("Finished Ryj()");
#endif /* a */
#ifndef OMITkuZ
    printLine("Calling kuZ()...");
    xAWyVxpNglOKUFbiVeiM_kuZ();
    printLine("Finished kuZ()");
#endif /* a */
    return 0;
}

#endif
