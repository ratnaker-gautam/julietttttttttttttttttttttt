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

#ifndef OMITkxO

void kDAYsCckswIMRZneYHFB_kxO()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"kxOXXXXXX";
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
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

#endif /* a */

#ifndef OMITnVt

/* a a a a a a */
static void nVt1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"nVtXXXXXX";
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
    break;
    }
}

/* a a a a a a a */
static void nVt2()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"nVtXXXXXX";
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
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
}

void kDAYsCckswIMRZneYHFB_nVt()
{
    nVt1();
    nVt2();
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
#ifndef OMITnVt
    printLine("Calling nVt()...");
    kDAYsCckswIMRZneYHFB_nVt();
    printLine("Finished nVt()");
#endif /* a */
#ifndef OMITkxO
    printLine("Calling kxO()...");
    kDAYsCckswIMRZneYHFB_kxO();
    printLine("Finished kxO()");
#endif /* a */
    return 0;
}

#endif
