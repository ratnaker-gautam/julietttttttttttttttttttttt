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
 * a a a a a a
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

#ifndef OMITFal

void sALSjSFbSHmIrRnFoXrk_Fal()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"FalXXXXXX";
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
    else
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"DqGXXXXXX";
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

#endif /* a */

#ifndef OMITDqG

/* a a a a a a a a a a a */
static void DqG1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"DqGXXXXXX";
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
    else
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"DqGXXXXXX";
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

void sALSjSFbSHmIrRnFoXrk_DqG()
{
    DqG1();
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
#ifndef OMITDqG
    printLine("Calling DqG()...");
    sALSjSFbSHmIrRnFoXrk_DqG();
    printLine("Finished DqG()");
#endif /* a */
#ifndef OMITFal
    printLine("Calling Fal()...");
    sALSjSFbSHmIrRnFoXrk_Fal();
    printLine("Finished Fal()");
#endif /* a */
    return 0;
}

#endif
