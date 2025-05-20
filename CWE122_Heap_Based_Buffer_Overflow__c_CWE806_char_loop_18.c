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
 *    a a a a a a a a a
 * a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITKTt

void auhUqJkvluLHjpOrsEov_KTt()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    /* a a a a a a a a a a a a a a a a a a */
    memset(data, 'A', 100-1); /* a a a */
    data[100-1] = '\0'; /* a a */
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        /* a a a a a a a a a a a */
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
        free(data);
    }
}

#endif /* a */

#ifndef OMIToIW

/* a a a a a a a a a a a a a a */
static void oIWG2B()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    /* a a a a a a a a a a a a a a a a a a a a */
    memset(data, 'A', 50-1); /* a a a */
    data[50-1] = '\0'; /* a a */
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        /* a a a a a a a a a a a */
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
        free(data);
    }
}

void auhUqJkvluLHjpOrsEov_oIW()
{
    oIWG2B();
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
#ifndef OMIToIW
    printLine("Calling oIW()...");
    auhUqJkvluLHjpOrsEov_oIW();
    printLine("Finished oIW()");
#endif /* a */
#ifndef OMITKTt
    printLine("Calling KTt()...");
    auhUqJkvluLHjpOrsEov_KTt();
    printLine("Finished KTt()");
#endif /* a */
    return 0;
}

#endif
