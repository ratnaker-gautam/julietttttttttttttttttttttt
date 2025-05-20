/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITwLF

void rhVvUquVjIVoIdCAlMax_wLF()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(1)
    {
        /* a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        /* a a a a a a a a a a a */
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
    }
}

#endif /* a */

#ifndef OMITaAq

/* a a a a a a a a a a a a */
static void aAqG2B1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        /* a a a a a a a a a a a */
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
    }
}

/* a a a a a a a a a a a a a a */
static void aAqG2B2()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(1)
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        /* a a a a a a a a a a a */
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
    }
}

void rhVvUquVjIVoIdCAlMax_aAq()
{
    aAqG2B1();
    aAqG2B2();
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
#ifndef OMITaAq
    printLine("Calling aAq()...");
    rhVvUquVjIVoIdCAlMax_aAq();
    printLine("Finished aAq()");
#endif /* a */
#ifndef OMITwLF
    printLine("Calling wLF()...");
    rhVvUquVjIVoIdCAlMax_wLF();
    printLine("Finished wLF()");
#endif /* a */
    return 0;
}

#endif
