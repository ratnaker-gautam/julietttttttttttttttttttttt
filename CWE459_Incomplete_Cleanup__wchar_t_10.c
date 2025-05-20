/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a
 *    a a a a
 *    a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define UNLINK _wunlink
#define FOPEN _wfopen
#define MKTEMP _wmktemp
#else
#include <unistd.h>
#define UNLINK unlink
#define FOPEN fopen
#define MKTEMP mktemp
#endif

#ifndef OMITCZe

void bQyngEYtgHvhcIVFQHte_CZe()
{
    if(globalTrue)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"CZeXXXXXX";
            FILE *pFile;
            /* a a a a a a a a a a a a a */
            filename = MKTEMP(tmpl);
            if (filename != NULL)
            {
                pFile = FOPEN(filename, L"w");
                if (pFile != NULL)
                {
                    fprintf(pFile, "Temporary file");
                    fclose(pFile);
                    /* a a a a */
                }
            }
        }
    }
}

#endif /* a */

#ifndef OMITesJ

/* a a a a a a */
static void esJ1()
{
    if(globalFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"esJXXXXXX";
            FILE *pFile;
            /* a a a a a a a a a a a a a */
            filename = MKTEMP(tmpl);
            if (filename != NULL)
            {
                pFile = FOPEN(filename, L"w");
                if (pFile != NULL)
                {
                    fprintf(pFile, "Temporary file");
                    fclose(pFile);
                    /* a a a a a */
                    UNLINK(filename); /* a a a a a a a a a a a a a */
                }
            }
        }
    }
}

/* a a a a a a a a */
static void esJ2()
{
    if(globalTrue)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"esJXXXXXX";
            FILE *pFile;
            /* a a a a a a a a a a a a a */
            filename = MKTEMP(tmpl);
            if (filename != NULL)
            {
                pFile = FOPEN(filename, L"w");
                if (pFile != NULL)
                {
                    fprintf(pFile, "Temporary file");
                    fclose(pFile);
                    /* a a a a a */
                    UNLINK(filename); /* a a a a a a a a a a a a a */
                }
            }
        }
    }
}

void bQyngEYtgHvhcIVFQHte_esJ()
{
    esJ1();
    esJ2();
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
#ifndef OMITesJ
    printLine("Calling esJ()...");
    bQyngEYtgHvhcIVFQHte_esJ();
    printLine("Finished esJ()");
#endif /* a */
#ifndef OMITCZe
    printLine("Calling CZe()...");
    bQyngEYtgHvhcIVFQHte_CZe();
    printLine("Finished CZe()");
#endif /* a */
    return 0;
}

#endif
