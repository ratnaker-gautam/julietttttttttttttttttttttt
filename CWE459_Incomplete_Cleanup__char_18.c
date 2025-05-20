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

#ifndef OMITekg

void VLfTFFuORZOBWnSyPiXO_ekg()
{
    goto sink;
sink:
    {
        char filename[] = "ekgXXXXXX";
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

#ifndef OMITbKC

/* a a a a a a a a */
static void bKC1()
{
    goto sink;
sink:
    {
        char filename[] = "bKCXXXXXX";
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

void VLfTFFuORZOBWnSyPiXO_bKC()
{
    bKC1();
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
#ifndef OMITbKC
    printLine("Calling bKC()...");
    VLfTFFuORZOBWnSyPiXO_bKC();
    printLine("Finished bKC()");
#endif /* a */
#ifndef OMITekg
    printLine("Calling ekg()...");
    VLfTFFuORZOBWnSyPiXO_ekg();
    printLine("Finished ekg()");
#endif /* a */
    return 0;
}

#endif
