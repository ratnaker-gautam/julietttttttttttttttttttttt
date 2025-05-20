/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITDeu

void ZamhVgCyWUTiEYMVIyuU_Deu()
{
    if(staticTrue)
    {
        {
            wchar_t src[150], dest[100];
            int i;
            /* a a */
            wmemset(src, L'A', 149);
            src[149] = L'\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            /* a a a a a a a a a a */
            printWLine(dest);
        }
    }
}

#endif /* a */

#ifndef OMITtvu

/* a a a a a a */
static void tvu1()
{
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t src[150], dest[100];
            int i;
            /* a a */
            wmemset(src, L'A', 149);
            src[149] = L'\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            dest[99] = L'\0'; /* a a a a */
            printWLine(dest);
        }
    }
}

/* a a a a a a a a */
static void tvu2()
{
    if(staticTrue)
    {
        {
            wchar_t src[150], dest[100];
            int i;
            /* a a */
            wmemset(src, L'A', 149);
            src[149] = L'\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            dest[99] = L'\0'; /* a a a a */
            printWLine(dest);
        }
    }
}

void ZamhVgCyWUTiEYMVIyuU_tvu()
{
    tvu1();
    tvu2();
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
#ifndef OMITtvu
    printLine("Calling tvu()...");
    ZamhVgCyWUTiEYMVIyuU_tvu();
    printLine("Finished tvu()");
#endif /* a */
#ifndef OMITDeu
    printLine("Calling Deu()...");
    ZamhVgCyWUTiEYMVIyuU_Deu();
    printLine("Finished Deu()");
#endif /* a */
    return 0;
}

#endif
