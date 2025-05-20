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

#ifndef OMITJLO

void NNGHKnwBXDZRhoDKDvsp_JLO()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* a a a a a */
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
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

#ifndef OMITLhK

/* a a a a a a a a a a a a */
static void LhKG2B1()
{
    char * data;
    data = NULL;
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        /* a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
        break;
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

/* a a a a a a a a a a a a a */
static void LhKG2B2()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
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

void NNGHKnwBXDZRhoDKDvsp_LhK()
{
    LhKG2B1();
    LhKG2B2();
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
#ifndef OMITLhK
    printLine("Calling LhK()...");
    NNGHKnwBXDZRhoDKDvsp_LhK();
    printLine("Finished LhK()");
#endif /* a */
#ifndef OMITJLO
    printLine("Calling JLO()...");
    NNGHKnwBXDZRhoDKDvsp_JLO();
    printLine("Finished JLO()");
#endif /* a */
    return 0;
}

#endif
