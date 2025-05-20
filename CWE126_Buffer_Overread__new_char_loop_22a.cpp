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
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace MhXZIdsXjaDJykXICSTx_char_loop_22
{

#ifndef OMITNtU

/* a a a a a a a a a a a a a a a a a a
a a a a a a a a a a */
int NtUGlobal = 0;

char * NtUSource(char * data);

void NtU()
{
    char * data;
    data = NULL;
    NtUGlobal = 1; /* a */
    data = NtUSource(data);
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
        delete [] data;
    }
    ;
}

#endif /* a */

#ifndef OMITKIK

/* a a a a a a a a a a a a a a a a a a
a a a a a a a a a */
int KIKG2B1Global = 0;
int KIKG2B2Global = 0;

/* a a a a a a a a a a a a a a a a */
char * KIKG2B1Source(char * data);

static void KIKG2B1()
{
    char * data;
    data = NULL;
    KIKG2B1Global = 0; /* a */
    data = KIKG2B1Source(data);
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
        delete [] data;
    }
    ;
}

/* a a a a a a a a a a a a a a a a a */
char * KIKG2B2Source(char * data);

static void KIKG2B2()
{
    char * data;
    data = NULL;
    KIKG2B2Global = 1; /* a */
    data = KIKG2B2Source(data);
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
        delete [] data;
    }
    ;
}

void KIK()
{
    KIKG2B1();
    KIKG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace MhXZIdsXjaDJykXICSTx_char_loop_22; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITKIK
    printLine("Calling KIK()...");
    KIK();
    printLine("Finished KIK()");
#endif /* a */
#ifndef OMITNtU
    printLine("Calling NtU()...");
    NtU();
    printLine("Finished NtU()");
#endif /* a */
    return 0;
}

#endif
