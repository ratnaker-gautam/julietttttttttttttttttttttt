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

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITHUQ

void MeZiTLuthNojFMBXCycp_HUQ()
{
    if(staticTrue)
    {
        {
            char filename[] = "HUQXXXXXX";
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
    }
}

#endif /* a */

#ifndef OMITZbn

/* a a a a a a */
static void Zbn1()
{
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char filename[] = "ZbnXXXXXX";
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
    }
}

/* a a a a a a a a */
static void Zbn2()
{
    if(staticTrue)
    {
        {
            char filename[] = "ZbnXXXXXX";
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
    }
}

void MeZiTLuthNojFMBXCycp_Zbn()
{
    Zbn1();
    Zbn2();
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
#ifndef OMITZbn
    printLine("Calling Zbn()...");
    MeZiTLuthNojFMBXCycp_Zbn();
    printLine("Finished Zbn()");
#endif /* a */
#ifndef OMITHUQ
    printLine("Calling HUQ()...");
    MeZiTLuthNojFMBXCycp_HUQ();
    printLine("Finished HUQ()");
#endif /* a */
    return 0;
}

#endif
