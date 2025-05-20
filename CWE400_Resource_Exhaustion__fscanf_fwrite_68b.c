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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define SENTENCE "This is the sentence we are printing to the file. "

extern int JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_GXuData;
extern int JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_oiJG2BData;
extern int JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_oiJB2GData;

#ifndef OMITGXu

void BfEFsRzKAHdbNYYizKgr_GXuSink()
{
    int count = JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_GXuData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_GXu.txt";
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

#ifndef OMIToiJ

/* a a a a a a a */
void BfEFsRzKAHdbNYYizKgr_oiJG2BSink()
{
    int count = JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_oiJG2BData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_GXu.txt";
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
void BfEFsRzKAHdbNYYizKgr_oiJB2GSink()
{
    int count = JOwFlVXTynnuOfnGINRo__fscanf_fwrite_68_oiJB2GData;
    {
        size_t i = 0;
        FILE *pFile = NULL;
        const char *filename = "output_oiJ.txt";
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
