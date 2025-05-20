/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a
 *    a a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

#ifndef OMITxbV

void hetJbWsHiuSOWiRfOudy_xbV()
{
    if(staticFive==5)
    {
        {
            int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
            if (data == NULL) {exit(-1);}
            /* a a a a a a */
            data[0] = 5LL;
            printLongLongLine(data[0]);
            /* a a a a a a a a a a a a */
            data = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
            if (data != NULL)
            {
                /* a a a a a a */
                data[0] = 10LL;
                printLongLongLine(data[0]);
                free(data);
            }
        }
    }
}

#endif /* a */

#ifndef OMITeXl

/* a a a a a a */
static void eXl1()
{
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
            if (data == NULL) {exit(-1);}
            int64_t * tmpData;
            /* a a a a a a */
            data[0] = 5LL;
            printLongLongLine(data[0]);
            tmpData = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
            /* a a a a a a a a a a a a
            * a a a */
            if (tmpData != NULL)
            {
                data = tmpData;
                /* a a a a a a */
                data[0] = 10LL;
                printLongLongLine(data[0]);
            }
            free(data);
        }
    }
}

/* a a a a a a a a */
static void eXl2()
{
    if(staticFive==5)
    {
        {
            int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
            if (data == NULL) {exit(-1);}
            int64_t * tmpData;
            /* a a a a a a */
            data[0] = 5LL;
            printLongLongLine(data[0]);
            tmpData = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
            /* a a a a a a a a a a a a
            * a a a */
            if (tmpData != NULL)
            {
                data = tmpData;
                /* a a a a a a */
                data[0] = 10LL;
                printLongLongLine(data[0]);
            }
            free(data);
        }
    }
}

void hetJbWsHiuSOWiRfOudy_eXl()
{
    eXl1();
    eXl2();
}

#endif /* a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITeXl
    printLine("Calling eXl()...");
    hetJbWsHiuSOWiRfOudy_eXl();
    printLine("Finished eXl()");
#endif /* a */
#ifndef OMITxbV
    printLine("Calling xbV()...");
    hetJbWsHiuSOWiRfOudy_xbV();
    printLine("Finished xbV()");
#endif /* a */
    return 0;
}

#endif
