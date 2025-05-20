/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITyYy

void cnJipopYdJVuemAbqAwR_yYy()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
    }
    else
    {
        /* a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
    }
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        destLen = strlen(dest);
        /* a a a a a a a a a
         * a a a a a a a a */
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}

#endif /* a */

#ifndef OMIThRP

/* a a a a a a a a a a a a
 * a a a a a */
static void hRPG2B()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
    }
    else
    {
        /* a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
    }
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        destLen = strlen(dest);
        /* a a a a a a a a a
         * a a a a a a a a */
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}

void cnJipopYdJVuemAbqAwR_hRP()
{
    hRPG2B();
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
#ifndef OMIThRP
    printLine("Calling hRP()...");
    cnJipopYdJVuemAbqAwR_hRP();
    printLine("Finished hRP()");
#endif /* a */
#ifndef OMITyYy
    printLine("Calling yYy()...");
    cnJipopYdJVuemAbqAwR_yYy();
    printLine("Finished yYy()");
#endif /* a */
    return 0;
}

#endif
