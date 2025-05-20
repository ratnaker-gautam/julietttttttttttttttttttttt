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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include <stdarg.h>
#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITdAO

/* a a a a a a a a a a a a a a */
static int dAOStatic = 0;

static void dAOVaSink(char * data, ...)
{
    if(dAOStatic)
    {
        {
            va_list args;
            va_start(args, data);
            /* a a a a a a a a a a a a a */
            vprintf(data, args);
            va_end(args);
        }
    }
}

void UuRxYAimxyMwfvzUNERW_dAO()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = strlen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                /* a a a a a a */
                data[dataLen] = '\0';
            }
        }
    }
    dAOStatic = 1; /* a */
    dAOVaSink(data, data);
}

#endif /* a */

#ifndef OMITAfJ

/* a a a a a a a a a a a a a a */
static int AfJB2G1Static = 0;
static int AfJB2G2Static = 0;
static int AfJG2BStatic = 0;

/* a a a a a a a a a a a a a a a a */
static void AfJB2G1_vasink(char * data, ...)
{
    if(AfJB2G1Static)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            va_list args;
            va_start(args, data);
            /* a a a a a a a a a */
            vprintf("%s", args);
            va_end(args);
        }
    }
}

static void AfJB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = strlen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                /* a a a a a a */
                data[dataLen] = '\0';
            }
        }
    }
    AfJB2G1Static = 0; /* a */
    AfJB2G1_vasink(data, data);
}

/* a a a a a a a a a a a a a a a a a */
static void AfJB2G2_vasink(char * data, ...)
{
    if(AfJB2G2Static)
    {
        {
            va_list args;
            va_start(args, data);
            /* a a a a a a a a a */
            vprintf("%s", args);
            va_end(args);
        }
    }
}

static void AfJB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = strlen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                /* a a a a a a */
                data[dataLen] = '\0';
            }
        }
    }
    AfJB2G2Static = 1; /* a */
    AfJB2G2_vasink(data, data);
}

/* a a a a a a */
static void AfJG2BVaSink(char * data, ...)
{
    if(AfJG2BStatic)
    {
        {
            va_list args;
            va_start(args, data);
            /* a a a a a a a a a a a a a */
            vprintf(data, args);
            va_end(args);
        }
    }
}

static void AfJG2B()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    /* a a a a a a a a a a a a */
    strcpy(data, "fixedstringtest");
    AfJG2BStatic = 1; /* a */
    AfJG2BVaSink(data, data);
}

void UuRxYAimxyMwfvzUNERW_AfJ()
{
    AfJB2G1();
    AfJB2G2();
    AfJG2B();
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
#ifndef OMITAfJ
    printLine("Calling AfJ()...");
    UuRxYAimxyMwfvzUNERW_AfJ();
    printLine("Finished AfJ()");
#endif /* a */
#ifndef OMITdAO
    printLine("Calling dAO()...");
    UuRxYAimxyMwfvzUNERW_dAO();
    printLine("Finished dAO()");
#endif /* a */
    return 0;
}

#endif
