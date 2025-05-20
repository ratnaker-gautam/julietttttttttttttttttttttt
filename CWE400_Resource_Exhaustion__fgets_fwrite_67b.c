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
 * a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#define SENTENCE "This is the sentence we are printing to the file. "

typedef struct _neBfngPilxKaqggAQJqe__fgets_fwrite_67_structType
{
    int structFirst;
} neBfngPilxKaqggAQJqe__fgets_fwrite_67_structType;

#ifndef OMITEsk

void SGpUkQBSTuKFwGpxLTei_EskSink(neBfngPilxKaqggAQJqe__fgets_fwrite_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_Esk.txt";
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

#ifndef OMITkuY

/* a a a a a a a */
void SGpUkQBSTuKFwGpxLTei_kuYG2BSink(neBfngPilxKaqggAQJqe__fgets_fwrite_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_Esk.txt";
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
void SGpUkQBSTuKFwGpxLTei_kuYB2GSink(neBfngPilxKaqggAQJqe__fgets_fwrite_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_kuY.txt";
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
