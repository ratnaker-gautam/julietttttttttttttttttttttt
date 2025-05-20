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

#ifndef OMITIQh

static void IQhVaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

void NYOeWebpGgTQHmcevZWx_IQh()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
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
    }
    if(globalReturnsTrue())
    {
        IQhVaSinkB(data, data);
    }
}

#endif /* a */

#ifndef OMITSym

static void SymB2G1VaSinkG(char * data, ...)
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
static void SymB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
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
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        SymB2G1VaSinkG(data, data);
    }
}

static void SymB2G2VaSinkG(char * data, ...)
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
static void SymB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
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
    }
    if(globalReturnsTrue())
    {
        SymB2G2VaSinkG(data, data);
    }
}

static void SymG2B1VaSinkB(char * data, ...)
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
static void SymG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(globalReturnsTrue())
    {
        SymG2B1VaSinkB(data, data);
    }
}

static void SymG2B2VaSinkB(char * data, ...)
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
static void SymG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(globalReturnsTrue())
    {
        SymG2B2VaSinkB(data, data);
    }
}

void NYOeWebpGgTQHmcevZWx_Sym()
{
    SymG2B1();
    SymG2B2();
    SymB2G1();
    SymB2G2();
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
#ifndef OMITSym
    printLine("Calling Sym()...");
    NYOeWebpGgTQHmcevZWx_Sym();
    printLine("Finished Sym()");
#endif /* a */
#ifndef OMITIQh
    printLine("Calling IQh()...");
    NYOeWebpGgTQHmcevZWx_IQh();
    printLine("Finished IQh()");
#endif /* a */
    return 0;
}

#endif
