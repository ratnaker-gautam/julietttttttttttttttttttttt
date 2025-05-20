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

#ifndef OMITFhR

void ecSXEYhXcluLHIDVIlxO_FhR()
{
    goto sink;
sink:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"FhRXXXXXX";
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

#endif /* a */

#ifndef OMITgKb

/* a a a a a a a a */
static void gKb1()
{
    goto sink;
sink:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"gKbXXXXXX";
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

void ecSXEYhXcluLHIDVIlxO_gKb()
{
    gKb1();
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
#ifndef OMITgKb
    printLine("Calling gKb()...");
    ecSXEYhXcluLHIDVIlxO_gKb();
    printLine("Finished gKb()");
#endif /* a */
#ifndef OMITFhR
    printLine("Calling FhR()...");
    ecSXEYhXcluLHIDVIlxO_FhR();
    printLine("Finished FhR()");
#endif /* a */
    return 0;
}

#endif
