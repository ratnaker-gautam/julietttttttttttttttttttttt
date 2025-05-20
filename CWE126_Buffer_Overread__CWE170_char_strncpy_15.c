/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a
 *    a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMIThEj

void DpJqynAabxWfgpScePzi_hEj()
{
    switch(6)
    {
    case 6:
    {
        char data[150], dest[100];
        /* a a */
        memset(data, 'A', 149);
        data[149] = '\0';
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a */
        strncpy(dest, data, 99);
        /* a a a a a a a a a a a a */
        printLine(dest);
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITRkF

/* a a a a a a */
static void RkF1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        char data[150], dest[100];
        /* a a */
        memset(data, 'A', 149);
        data[149] = '\0';
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a */
        strncpy(dest, data, 99);
        dest[99] = '\0'; /* a a a a a a a a a a */
        printLine(dest);
    }
    break;
    }
}

/* a a a a a a a */
static void RkF2()
{
    switch(6)
    {
    case 6:
    {
        char data[150], dest[100];
        /* a a */
        memset(data, 'A', 149);
        data[149] = '\0';
        /* a a a a a a a a a a a a a a a
         * a a a a a a a a a a */
        strncpy(dest, data, 99);
        dest[99] = '\0'; /* a a a a a a a a a a */
        printLine(dest);
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void DpJqynAabxWfgpScePzi_RkF()
{
    RkF1();
    RkF2();
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
#ifndef OMITRkF
    printLine("Calling RkF()...");
    DpJqynAabxWfgpScePzi_RkF();
    printLine("Finished RkF()");
#endif /* a */
#ifndef OMIThEj
    printLine("Calling hEj()...");
    DpJqynAabxWfgpScePzi_hEj();
    printLine("Finished hEj()");
#endif /* a */
    return 0;
}

#endif
