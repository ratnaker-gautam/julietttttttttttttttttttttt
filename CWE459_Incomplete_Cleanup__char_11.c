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

#ifndef OMITaBc

void WSgmzrrkFMPAwPnfXGZR_aBc()
{
    if(globalReturnsTrue())
    {
        {
            char filename[] = "aBcXXXXXX";
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

#ifndef OMITqwA

/* a a a a a a */
static void qwA1()
{
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char filename[] = "qwAXXXXXX";
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
static void qwA2()
{
    if(globalReturnsTrue())
    {
        {
            char filename[] = "qwAXXXXXX";
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

void WSgmzrrkFMPAwPnfXGZR_qwA()
{
    qwA1();
    qwA2();
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
#ifndef OMITqwA
    printLine("Calling qwA()...");
    WSgmzrrkFMPAwPnfXGZR_qwA();
    printLine("Finished qwA()");
#endif /* a */
#ifndef OMITaBc
    printLine("Calling aBc()...");
    WSgmzrrkFMPAwPnfXGZR_aBc();
    printLine("Finished aBc()");
#endif /* a */
    return 0;
}

#endif
