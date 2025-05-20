/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#define SENTENCE "This is the sentence we are printing to the file. "

static int BimFNmUuNTOfAkKMFGwm_dphData;
static int BimFNmUuNTOfAkKMFGwm_ApAG2BData;
static int BimFNmUuNTOfAkKMFGwm_ApAB2GData;

#ifndef OMITdph

static void dphSink()
{
    int count = BimFNmUuNTOfAkKMFGwm_dphData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_dph.txt";
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

void BimFNmUuNTOfAkKMFGwm_dph()
{
    int count;
    /* a a */
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    BimFNmUuNTOfAkKMFGwm_dphData = count;
    dphSink();
}

#endif /* a */

#ifndef OMITApA

/* a a a a a a a */
static void ApAG2BSink()
{
    int count = BimFNmUuNTOfAkKMFGwm_ApAG2BData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_dph.txt";
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

static void ApAG2B()
{
    int count;
    /* a a */
    count = -1;
    /* a a a a a a */
    count = 20;
    BimFNmUuNTOfAkKMFGwm_ApAG2BData = count;
    ApAG2BSink();
}

/* a a a a a a a */
static void ApAB2GSink()
{
    int count = BimFNmUuNTOfAkKMFGwm_ApAB2GData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_ApA.txt";
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

static void ApAB2G()
{
    int count;
    /* a a */
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* a a a a a a a a a */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* a a a */
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    BimFNmUuNTOfAkKMFGwm_ApAB2GData = count;
    ApAB2GSink();
}

void BimFNmUuNTOfAkKMFGwm_ApA()
{
    ApAG2B();
    ApAB2G();
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
#ifndef OMITApA
    printLine("Calling ApA()...");
    BimFNmUuNTOfAkKMFGwm_ApA();
    printLine("Finished ApA()");
#endif /* a */
#ifndef OMITdph
    printLine("Calling dph()...");
    BimFNmUuNTOfAkKMFGwm_dph();
    printLine("Finished dph()");
#endif /* a */
    return 0;
}

#endif
