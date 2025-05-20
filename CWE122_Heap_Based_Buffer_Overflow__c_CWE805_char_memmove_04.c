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

/* a a a a a a a a a a a
 * a a a a a a a a a a a a
 * a a
 */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITDkE

void yguenaMHaJeXKqockqgw_DkE()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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

#ifndef OMITIjH

/* a a a a a a a a a a a a */
static void IjHG2B1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
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
static void IjHG2B2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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

void yguenaMHaJeXKqockqgw_IjH()
{
    IjHG2B1();
    IjHG2B2();
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
#ifndef OMITIjH
    printLine("Calling IjH()...");
    yguenaMHaJeXKqockqgw_IjH();
    printLine("Finished IjH()");
#endif /* a */
#ifndef OMITDkE
    printLine("Calling DkE()...");
    yguenaMHaJeXKqockqgw_DkE();
    printLine("Finished DkE()");
#endif /* a */
    return 0;
}

#endif
