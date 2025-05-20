/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif

typedef union
{
    char * unionFirst;
    char * unionSecond;
} zVTUEvJlrlgElbMAgAKf_unionType;

#ifndef OMITDYD

void zVTUEvJlrlgElbMAgAKf_DYD()
{
    char * data;
    zVTUEvJlrlgElbMAgAKf_unionType myUnion;
    char * dataDYDBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataxtJBuffer = (char *)ALLOCA(100*sizeof(char));
    /* a a a a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
    data = dataDYDBuffer;
    data[0] = '\0'; /* a a */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a a a a a a */
            SNPRINTF(data, 100, "%s", source);
            printLine(data);
        }
    }
}

#endif /* a */

#ifndef OMITxtJ

/* a a a a a a a */
static void xtJG2B()
{
    char * data;
    zVTUEvJlrlgElbMAgAKf_unionType myUnion;
    char * dataDYDBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataxtJBuffer = (char *)ALLOCA(100*sizeof(char));
    /* a a a a a a a a a a a a a a a */
    data = dataxtJBuffer;
    data[0] = '\0'; /* a a */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* a a a */
            source[100-1] = '\0'; /* a a */
            /* a a a a a a a a a a a a a a a a a */
            SNPRINTF(data, 100, "%s", source);
            printLine(data);
        }
    }
}

void zVTUEvJlrlgElbMAgAKf_xtJ()
{
    xtJG2B();
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
#ifndef OMITxtJ
    printLine("Calling xtJ()...");
    zVTUEvJlrlgElbMAgAKf_xtJ();
    printLine("Finished xtJ()");
#endif /* a */
#ifndef OMITDYD
    printLine("Calling DYD()...");
    zVTUEvJlrlgElbMAgAKf_DYD();
    printLine("Finished DYD()");
#endif /* a */
    return 0;
}

#endif
