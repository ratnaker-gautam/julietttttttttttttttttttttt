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

#ifndef OMITreb

void vTgUVwdtMYoiOSrSKgOu_reb()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char filename[] = "rebXXXXXX";
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

#ifndef OMITroh

/* a a a a a a */
static void roh1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char filename[] = "rohXXXXXX";
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
static void roh2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char filename[] = "rohXXXXXX";
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

void vTgUVwdtMYoiOSrSKgOu_roh()
{
    roh1();
    roh2();
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
#ifndef OMITroh
    printLine("Calling roh()...");
    vTgUVwdtMYoiOSrSKgOu_roh();
    printLine("Finished roh()");
#endif /* a */
#ifndef OMITreb
    printLine("Calling reb()...");
    vTgUVwdtMYoiOSrSKgOu_reb();
    printLine("Finished reb()");
#endif /* a */
    return 0;
}

#endif
