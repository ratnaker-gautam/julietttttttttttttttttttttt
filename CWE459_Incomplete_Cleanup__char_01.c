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
 * a a a a
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

#ifndef OMITBff

void MEvONpDgrqziasIfUixT_Bff()
{
    {
        char filename[] = "BffXXXXXX";
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

#endif /* a */

#ifndef OMITyDp

static void yDp1()
{
    {
        char filename[] = "yDpXXXXXX";
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

void MEvONpDgrqziasIfUixT_yDp()
{
    yDp1();
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
#ifndef OMITyDp
    printLine("Calling yDp()...");
    MEvONpDgrqziasIfUixT_yDp();
    printLine("Finished yDp()");
#endif /* a */
#ifndef OMITBff
    printLine("Calling Bff()...");
    MEvONpDgrqziasIfUixT_Bff();
    printLine("Finished Bff()");
#endif /* a */
    return 0;
}

#endif
