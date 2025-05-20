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

#ifndef OMITplG

void yCjwfzNhxHLyqtyPPhJM_plG()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char filename[] = "plGXXXXXX";
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

#ifndef OMITZDK

/* a a a a a a a a */
static void ZDK1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char filename[] = "ZDKXXXXXX";
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

void yCjwfzNhxHLyqtyPPhJM_ZDK()
{
    ZDK1();
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
#ifndef OMITZDK
    printLine("Calling ZDK()...");
    yCjwfzNhxHLyqtyPPhJM_ZDK();
    printLine("Finished ZDK()");
#endif /* a */
#ifndef OMITplG
    printLine("Calling plG()...");
    yCjwfzNhxHLyqtyPPhJM_plG();
    printLine("Finished plG()");
#endif /* a */
    return 0;
}

#endif
