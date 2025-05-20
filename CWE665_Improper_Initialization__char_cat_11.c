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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITgTx

void yDwdYmFLrLUlvNHqLSri_gTx()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        /* a a a a a */
        ; /* a a a a a a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a */
        strcat(data, source);
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITYzy

/* a a a a a a a a a a a a */
static void YzyG2B1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a */
        data[0] = '\0'; /* a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a */
        strcat(data, source);
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void YzyG2B2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        /* a a a a */
        data[0] = '\0'; /* a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a */
        strcat(data, source);
        printLine(data);
    }
}

void yDwdYmFLrLUlvNHqLSri_Yzy()
{
    YzyG2B1();
    YzyG2B2();
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
#ifndef OMITYzy
    printLine("Calling Yzy()...");
    yDwdYmFLrLUlvNHqLSri_Yzy();
    printLine("Finished Yzy()");
#endif /* a */
#ifndef OMITgTx
    printLine("Calling gTx()...");
    yDwdYmFLrLUlvNHqLSri_gTx();
    printLine("Finished gTx()");
#endif /* a */
    return 0;
}

#endif
