/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITwZD

void ngMRDJmkqWgjwJMtUClP_wZD()
{
    char * data;
    char datawZDBuffer[50];
    char dataCrsBuffer[100];
    memset(datawZDBuffer, 'A', 50-1); /* a a a */
    datawZDBuffer[50-1] = '\0'; /* a a */
    memset(dataCrsBuffer, 'A', 100-1); /* a a a */
    dataCrsBuffer[100-1] = '\0'; /* a a */
    /* a a a a a a a a */
    data = datawZDBuffer;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a
             * a a a a a a a a */
            memmove(dest, data, strlen(dest)*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}

#endif /* a */

#ifndef OMITCrs

/* a a a a a a a */
static void CrsG2B()
{
    char * data;
    char datawZDBuffer[50];
    char dataCrsBuffer[100];
    memset(datawZDBuffer, 'A', 50-1); /* a a a */
    datawZDBuffer[50-1] = '\0'; /* a a */
    memset(dataCrsBuffer, 'A', 100-1); /* a a a */
    dataCrsBuffer[100-1] = '\0'; /* a a */
    /* a a a a a a a a */
    data = dataCrsBuffer;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a
             * a a a a a a a a */
            memmove(dest, data, strlen(dest)*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}

void ngMRDJmkqWgjwJMtUClP_Crs()
{
    CrsG2B();
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
#ifndef OMITCrs
    printLine("Calling Crs()...");
    ngMRDJmkqWgjwJMtUClP_Crs();
    printLine("Finished Crs()");
#endif /* a */
#ifndef OMITwZD
    printLine("Calling wZD()...");
    ngMRDJmkqWgjwJMtUClP_wZD();
    printLine("Finished wZD()");
#endif /* a */
    return 0;
}

#endif
