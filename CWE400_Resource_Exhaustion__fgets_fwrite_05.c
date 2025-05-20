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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#define SENTENCE "This is the sentence we are printing to the file. "

/* a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a */
static int staticTrue = 1; /* a */
static int staticFalse = 0; /* a */

#ifndef OMITYps

void jMFZwjVeEVOhWFRfaPcI_Yps()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    if(staticTrue)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_Yps.txt";
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

#ifndef OMITgph

/* a a a a a a a a a a a a a */
static void gphB2G1()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_gph.txt";
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
}

/* a a a a a a a a a a a a a a */
static void gphB2G2()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
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
    if(staticTrue)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_gph.txt";
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
}

/* a a a a a a a a a a a a a */
static void gphG2B1()
{
    int count;
    /* a a */
    count = -1;
    if(staticFalse)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a */
        count = 20;
    }
    if(staticTrue)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_Yps.txt";
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

/* a a a a a a a a a a a a a a */
static void gphG2B2()
{
    int count;
    /* a a */
    count = -1;
    if(staticTrue)
    {
        /* a a a a a a */
        count = 20;
    }
    if(staticTrue)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_Yps.txt";
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

void jMFZwjVeEVOhWFRfaPcI_gph()
{
    gphB2G1();
    gphB2G2();
    gphG2B1();
    gphG2B2();
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
#ifndef OMITgph
    printLine("Calling gph()...");
    jMFZwjVeEVOhWFRfaPcI_gph();
    printLine("Finished gph()");
#endif /* a */
#ifndef OMITYps
    printLine("Calling Yps()...");
    jMFZwjVeEVOhWFRfaPcI_Yps();
    printLine("Finished Yps()");
#endif /* a */
    return 0;
}

#endif
