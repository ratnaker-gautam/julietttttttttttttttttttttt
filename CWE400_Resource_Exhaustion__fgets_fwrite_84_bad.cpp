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
 * a a a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */
#ifndef OMITssH

#include "std_testcase.h"
#include "edBBqwYoCBPoZlmiPBuN__fgets_fwrite_84.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#define SENTENCE "This is the sentence we are printing to the file. "

namespace edBBqwYoCBPoZlmiPBuN__fgets_fwrite_84
{
PLbWpMMxCggHDVleALYX::PLbWpMMxCggHDVleALYX(int countCopy)
{
    count = countCopy;
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
}

PLbWpMMxCggHDVleALYX::~PLbWpMMxCggHDVleALYX()
{
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_ssH.txt";
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
}
#endif /* a */
