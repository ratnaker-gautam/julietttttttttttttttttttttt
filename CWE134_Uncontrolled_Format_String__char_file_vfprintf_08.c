/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a
 *    a a a a a a a
 * a a a a a a a a
 *
 * */

#include <stdarg.h>
#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifdef _WIN32
#define FILENAME "C:\\temp\\file.txt"
#else
#define FILENAME "/tmp/file.txt"
#endif

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITsrw

static void srwVaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

void iqTbfMUdcsOGPurSxGXH_srw()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
    {
        {
            /* a a a a a */
            size_t dataLen = strlen(data);
            FILE * pFile;
            /* a a a a a a a a a a a a a a */
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    /* a a a a a a a */
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        /* a a a a a a */
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    if(staticReturnsTrue())
    {
        srwVaSinkB(data, data);
    }
}

#endif /* a */

#ifndef OMITbJQ

static void bJQB2G1VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void bJQB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
    {
        {
            /* a a a a a */
            size_t dataLen = strlen(data);
            FILE * pFile;
            /* a a a a a a a a a a a a a a */
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    /* a a a a a a a */
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        /* a a a a a a */
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        bJQB2G1VaSinkG(data, data);
    }
}

static void bJQB2G2VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void bJQB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
    {
        {
            /* a a a a a */
            size_t dataLen = strlen(data);
            FILE * pFile;
            /* a a a a a a a a a a a a a a */
            if (100-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    /* a a a a a a a */
                    if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        /* a a a a a a */
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    if(staticReturnsTrue())
    {
        bJQB2G2VaSinkG(data, data);
    }
}

static void bJQG2B1VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void bJQG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(staticReturnsTrue())
    {
        bJQG2B1VaSinkB(data, data);
    }
}

static void bJQG2B2VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void bJQG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(staticReturnsTrue())
    {
        bJQG2B2VaSinkB(data, data);
    }
}

void iqTbfMUdcsOGPurSxGXH_bJQ()
{
    bJQG2B1();
    bJQG2B2();
    bJQB2G1();
    bJQB2G2();
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
#ifndef OMITbJQ
    printLine("Calling bJQ()...");
    iqTbfMUdcsOGPurSxGXH_bJQ();
    printLine("Finished bJQ()");
#endif /* a */
#ifndef OMITsrw
    printLine("Calling srw()...");
    iqTbfMUdcsOGPurSxGXH_srw();
    printLine("Finished srw()");
#endif /* a */
    return 0;
}

#endif
