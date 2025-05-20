/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITyFK

void TqJrjlOQiczxpnpwEOlx_yFK()
{
    char * data;
    data = NULL;
    if(1)
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; /* a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a */
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; /* a a a a a a a */
        printLine(data);
        free(data);
    }
}

#endif /* a */

#ifndef OMITzzv

/* a a a a a a a a a a a a */
static void zzvG2B1()
{
    char * data;
    data = NULL;
    if(0)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; /* a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a */
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; /* a a a a a a a */
        printLine(data);
        free(data);
    }
}

/* a a a a a a a a a a a a a a */
static void zzvG2B2()
{
    char * data;
    data = NULL;
    if(1)
    {
        /* a a a a a a a a a a a a a a a a a a a a a a a */
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; /* a a */
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* a a a */
        source[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a */
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; /* a a a a a a a */
        printLine(data);
        free(data);
    }
}

void TqJrjlOQiczxpnpwEOlx_zzv()
{
    zzvG2B1();
    zzvG2B2();
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
#ifndef OMITzzv
    printLine("Calling zzv()...");
    TqJrjlOQiczxpnpwEOlx_zzv();
    printLine("Finished zzv()");
#endif /* a */
#ifndef OMITyFK
    printLine("Calling yFK()...");
    TqJrjlOQiczxpnpwEOlx_yFK();
    printLine("Finished yFK()");
#endif /* a */
    return 0;
}

#endif
