/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a a a
 * a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a */
#define SRC_STRING "AAAAAAAAAA"

#ifndef OMITtTH

void mogbGDsrCylZyomjggFe_tTH()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        /* a a a a a a a a a */
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            /* a a a a a a a a a a */
            /* a a a a a a a a a a a */
            memmove(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            free(data);
        }
    }
}

#endif /* a */

#ifndef OMITCny

/* a a a a a a a */
static void CnyG2B()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        /* a a a a a a a */
        data = (char *)malloc((10+1)*sizeof(char));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            /* a a a a a a a a a a */
            /* a a a a a a a a a a a */
            memmove(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            free(data);
        }
    }
}

void mogbGDsrCylZyomjggFe_Cny()
{
    CnyG2B();
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
#ifndef OMITCny
    printLine("Calling Cny()...");
    mogbGDsrCylZyomjggFe_Cny();
    printLine("Finished Cny()");
#endif /* a */
#ifndef OMITtTH
    printLine("Calling tTH()...");
    mogbGDsrCylZyomjggFe_tTH();
    printLine("Finished tTH()");
#endif /* a */
    return 0;
}

#endif
