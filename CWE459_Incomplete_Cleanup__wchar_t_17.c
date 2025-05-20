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
 * a a a a a a a
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

#ifndef OMITPZA

void QrwAskjbwaiFcsVJNena_PZA()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"PZAXXXXXX";
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

#ifndef OMITBMj

/* a a a a a a a a */
static void BMj1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"BMjXXXXXX";
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

void QrwAskjbwaiFcsVJNena_BMj()
{
    BMj1();
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
#ifndef OMITBMj
    printLine("Calling BMj()...");
    QrwAskjbwaiFcsVJNena_BMj();
    printLine("Finished BMj()");
#endif /* a */
#ifndef OMITPZA
    printLine("Calling PZA()...");
    QrwAskjbwaiFcsVJNena_PZA();
    printLine("Finished PZA()");
#endif /* a */
    return 0;
}

#endif
