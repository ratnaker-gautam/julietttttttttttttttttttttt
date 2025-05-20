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
 * a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define SENTENCE "This is the sentence we are printing to the file. "

#ifndef OMITsJa

void PbKVagfpjxeKbVWSaYch_sJaSink(int * countPtr)
{
    int count = *countPtr;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_sJa.txt";
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

#ifndef OMITKfC

/* a a a a a a a */
void PbKVagfpjxeKbVWSaYch_KfCG2BSink(int * countPtr)
{
    int count = *countPtr;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_sJa.txt";
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
void PbKVagfpjxeKbVWSaYch_KfCB2GSink(int * countPtr)
{
    int count = *countPtr;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_KfC.txt";
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

#endif /* a */
