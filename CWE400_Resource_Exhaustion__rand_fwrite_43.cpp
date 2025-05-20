/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define SENTENCE "This is the sentence we are printing to the file. "

namespace wnBHSWfIJleOlrmsZPaz
{

#ifndef OMITzCa

static void zCaSource(int &count)
{
    /* a a a a a a a a */
    count = RAND32();
}

void zCa()
{
    int count;
    /* a a */
    count = -1;
    zCaSource(count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_zCa.txt";
        pFile = fopen(filename, "w+");
        if (pFile == NULL)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a
         * a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
            {
                exit(1);
            }
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}

#endif /* a */

#ifndef OMITOIh

/* a a a a a a a */
static void OIhG2BSource(int &count)
{
    /* a a a a a a */
    count = 20;
}

static void OIhG2B()
{
    int count;
    /* a a */
    count = -1;
    OIhG2BSource(count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_zCa.txt";
        pFile = fopen(filename, "w+");
        if (pFile == NULL)
        {
            exit(1);
        }
        /* a a a a a a a a a a a a a
         * a a a a a a a a a */
        for (i = 0; i < (size_t)count; i++)
        {
            if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
            {
                exit(1);
            }
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}

/* a a a a a a a */
static void OIhB2GSource(int &count)
{
    /* a a a a a a a a */
    count = RAND32();
}

static void OIhB2G()
{
    int count;
    /* a a */
    count = -1;
    OIhB2GSource(count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_OIh.txt";
        /* a a a a a a a a a a a a a a a a */
        if (count > 0 && count <= 20)
        {
            pFile = fopen(filename, "w+");
            if (pFile == NULL)
            {
                exit(1);
            }
            for (i = 0; i < (size_t)count; i++)
            {
                if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile)) exit(1);
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}

void OIh()
{
    OIhG2B();
    OIhB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace wnBHSWfIJleOlrmsZPaz; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITOIh
    printLine("Calling OIh()...");
    OIh();
    printLine("Finished OIh()");
#endif /* a */
#ifndef OMITzCa
    printLine("Calling zCa()...");
    zCa();
    printLine("Finished zCa()");
#endif /* a */
    return 0;
}

#endif
