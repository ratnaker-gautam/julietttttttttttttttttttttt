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

#ifndef OMITkAV

void lZvnWOPgGKQFcwcjDchW_kAV()
{
    while(1)
    {
        {
            char filename[] = "kAVXXXXXX";
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
    }
}

#endif /* a */

#ifndef OMITcsd

/* a a a a a a a a */
static void csd1()
{
    while(1)
    {
        {
            char filename[] = "csdXXXXXX";
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

void lZvnWOPgGKQFcwcjDchW_csd()
{
    csd1();
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
#ifndef OMITcsd
    printLine("Calling csd()...");
    lZvnWOPgGKQFcwcjDchW_csd();
    printLine("Finished csd()");
#endif /* a */
#ifndef OMITkAV
    printLine("Calling kAV()...");
    lZvnWOPgGKQFcwcjDchW_kAV();
    printLine("Finished kAV()");
#endif /* a */
    return 0;
}

#endif
