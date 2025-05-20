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
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITjRV

static void jRVSink(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a */
        strcat(data, source);
        printLine(data);
    }
}

void PfIJFMwEZCpxsQmwbgZu_jRV()
{
    char * data;
    /* a a a a */
    void (*funcPtr) (char *) = jRVSink;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITdHj

/* a a a a a a a */
static void dHjG2BSink(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a a */
        strcat(data, source);
        printLine(data);
    }
}

static void dHjG2B()
{
    char * data;
    void (*funcPtr) (char *) = dHjG2BSink;
    char dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = '\0'; /* a a */
    funcPtr(data);
}

void PfIJFMwEZCpxsQmwbgZu_dHj()
{
    dHjG2B();
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
#ifndef OMITdHj
    printLine("Calling dHj()...");
    PfIJFMwEZCpxsQmwbgZu_dHj();
    printLine("Finished dHj()");
#endif /* a */
#ifndef OMITjRV
    printLine("Calling jRV()...");
    PfIJFMwEZCpxsQmwbgZu_jRV();
    printLine("Finished jRV()");
#endif /* a */
    return 0;
}

#endif
