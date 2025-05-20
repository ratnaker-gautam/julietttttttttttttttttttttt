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

#ifndef OMITUMD

void uWxiayepFyPZsJlmtRYE_UMD()
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
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a a */
            strcat(data, source);
            printLine(data);
        }
    }
}

#endif /* a */

#ifndef OMITCQj

/* a a a a a a a */
static void CQjG2B()
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
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a a */
            strcat(data, source);
            printLine(data);
        }
    }
}

void uWxiayepFyPZsJlmtRYE_CQj()
{
    CQjG2B();
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
#ifndef OMITCQj
    printLine("Calling CQj()...");
    uWxiayepFyPZsJlmtRYE_CQj();
    printLine("Finished CQj()");
#endif /* a */
#ifndef OMITUMD
    printLine("Calling UMD()...");
    uWxiayepFyPZsJlmtRYE_UMD();
    printLine("Finished UMD()");
#endif /* a */
    return 0;
}

#endif
