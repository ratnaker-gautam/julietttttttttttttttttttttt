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

#ifndef OMITZbQ

void iDpKNMdiAIFwxFERIXyd_ZbQ()
{
    while(1)
    {
        {
            wchar_t data[150], dest[100];
            /* a a */
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            memcpy(dest, data, 99*sizeof(wchar_t));
            /* a a a a a a a a a a a a */
            printWLine(dest);
        }
        break;
    }
}

#endif /* a */

#ifndef OMITlHf

/* a a a a a a a a */
static void lHf1()
{
    while(1)
    {
        {
            wchar_t data[150], dest[100];
            /* a a */
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            memcpy(dest, data, 99*sizeof(wchar_t));
            dest[99] = L'\0'; /* a a a a */
            printWLine(dest);
        }
        break;
    }
}

void iDpKNMdiAIFwxFERIXyd_lHf()
{
    lHf1();
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
#ifndef OMITlHf
    printLine("Calling lHf()...");
    iDpKNMdiAIFwxFERIXyd_lHf();
    printLine("Finished lHf()");
#endif /* a */
#ifndef OMITZbQ
    printLine("Calling ZbQ()...");
    iDpKNMdiAIFwxFERIXyd_ZbQ();
    printLine("Finished ZbQ()");
#endif /* a */
    return 0;
}

#endif
