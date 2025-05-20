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
 * a a a a
 *
 * */

#include "std_testcase.h"

#define SENTENCE "This is the sentence we are printing to the file. "

#ifndef OMITExF

void wOURAVSWVWQkVBMPbwHZ_ExF()
{
    int count;
    /* a a */
    count = -1;
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_ExF.txt";
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

#ifndef OMITbJc

/* a a a a a a a */
static void bJcG2B()
{
    int count;
    /* a a */
    count = -1;
    /* a a a a a a */
    count = 20;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_ExF.txt";
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
static void bJcB2G()
{
    int count;
    /* a a */
    count = -1;
    /* a a a a a a a a a */
    fscanf(stdin, "%d", &count);
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_bJc.txt";
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

void wOURAVSWVWQkVBMPbwHZ_bJc()
{
    bJcG2B();
    bJcB2G();
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
#ifndef OMITbJc
    printLine("Calling bJc()...");
    wOURAVSWVWQkVBMPbwHZ_bJc();
    printLine("Finished bJc()");
#endif /* a */
#ifndef OMITExF
    printLine("Calling ExF()...");
    wOURAVSWVWQkVBMPbwHZ_ExF();
    printLine("Finished ExF()");
#endif /* a */
    return 0;
}

#endif
