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
#define UNLINK _unlink
#define FDOPEN fdopen
// to run on Windows, supply a replacement for Unix mkstemp()
#define MKSTEMP _mkstemp
static int _mkstemp(const char * t){
  size_t l = strlen(t) + 1;
  char s[50];
  strncpy(s, t, l);
  return _mktemp_s(s, l) ? -1 : _open(s, _O_CREAT|_O_EXCL);
}

#else
#include <unistd.h>
#define UNLINK unlink
#define FDOPEN fdopen
#define MKSTEMP mkstemp
#endif

#ifndef OMITXgn

void eCCYNjZXwvhXSlsgPtLc_Xgn()
{
    switch(6)
    {
    case 6:
    {
        char filename[] = "XgnXXXXXX";
        FILE *pFile;
        /* a a a a a a a a a a a a a */
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1)
        {
            pFile = FDOPEN(fileDesc, "w");
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

#ifndef OMITdhq

/* a a a a a a */
static void dhq1()
{
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        char filename[] = "dhqXXXXXX";
        FILE *pFile;
        /* a a a a a a a a a a a a a */
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1)
        {
            pFile = FDOPEN(fileDesc, "w");
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
static void dhq2()
{
    switch(6)
    {
    case 6:
    {
        char filename[] = "dhqXXXXXX";
        FILE *pFile;
        /* a a a a a a a a a a a a a */
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1)
        {
            pFile = FDOPEN(fileDesc, "w");
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

void eCCYNjZXwvhXSlsgPtLc_dhq()
{
    dhq1();
    dhq2();
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
#ifndef OMITdhq
    printLine("Calling dhq()...");
    eCCYNjZXwvhXSlsgPtLc_dhq();
    printLine("Finished dhq()");
#endif /* a */
#ifndef OMITXgn
    printLine("Calling Xgn()...");
    eCCYNjZXwvhXSlsgPtLc_Xgn();
    printLine("Finished Xgn()");
#endif /* a */
    return 0;
}

#endif
