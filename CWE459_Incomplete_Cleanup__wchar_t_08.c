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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITJHI

void sjjuXWetavqZCasLEFVT_JHI()
{
    if(staticReturnsTrue())
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"JHIXXXXXX";
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

#ifndef OMITiMn

/* a a a a a a */
static void iMn1()
{
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"iMnXXXXXX";
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
static void iMn2()
{
    if(staticReturnsTrue())
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"iMnXXXXXX";
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

void sjjuXWetavqZCasLEFVT_iMn()
{
    iMn1();
    iMn2();
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
#ifndef OMITiMn
    printLine("Calling iMn()...");
    sjjuXWetavqZCasLEFVT_iMn();
    printLine("Finished iMn()");
#endif /* a */
#ifndef OMITJHI
    printLine("Calling JHI()...");
    sjjuXWetavqZCasLEFVT_JHI();
    printLine("Finished JHI()");
#endif /* a */
    return 0;
}

#endif
