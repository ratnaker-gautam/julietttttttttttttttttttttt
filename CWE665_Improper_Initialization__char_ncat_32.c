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

#ifndef OMITbpC

void WVLmrslmpyqkFLrqkeMo_bpC()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        /* a a a a a */
        ; /* a a a a a a a */
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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

#ifndef OMITBrd

/* a a a a a a a */
static void BrdG2B()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        /* a a a a */
        data[0] = '\0'; /* a a */
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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

void WVLmrslmpyqkFLrqkeMo_Brd()
{
    BrdG2B();
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
#ifndef OMITBrd
    printLine("Calling Brd()...");
    WVLmrslmpyqkFLrqkeMo_Brd();
    printLine("Finished Brd()");
#endif /* a */
#ifndef OMITbpC
    printLine("Calling bpC()...");
    WVLmrslmpyqkFLrqkeMo_bpC();
    printLine("Finished bpC()");
#endif /* a */
    return 0;
}

#endif
