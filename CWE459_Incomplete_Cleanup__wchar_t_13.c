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

#ifndef OMITvKZ

void KiIjFXbYomdRRAhdNqar_vKZ()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"vKZXXXXXX";
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

#ifndef OMITsKj

/* a a a a a a */
static void sKj1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"sKjXXXXXX";
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
static void sKj2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"sKjXXXXXX";
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

void KiIjFXbYomdRRAhdNqar_sKj()
{
    sKj1();
    sKj2();
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
#ifndef OMITsKj
    printLine("Calling sKj()...");
    KiIjFXbYomdRRAhdNqar_sKj();
    printLine("Finished sKj()");
#endif /* a */
#ifndef OMITvKZ
    printLine("Calling vKZ()...");
    KiIjFXbYomdRRAhdNqar_vKZ();
    printLine("Finished vKZ()");
#endif /* a */
    return 0;
}

#endif
