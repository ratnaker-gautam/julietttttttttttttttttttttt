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

/* a a a a a a a a a a a
   a a a a a a a a a a a a
   a a */
static const int STATIC_CONST_TRUE = 1; /* a */
static const int STATIC_CONST_FALSE = 0; /* a */

#ifndef OMITdpL

static void dpLVaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vfprintf(stdout, data, args);
        va_end(args);
    }
}

void YmTflsJxLtyimraORorH_dpL()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        dpLVaSinkB(data, data);
    }
}

#endif /* a */

#ifndef OMITQUj

static void QUjB2G1VaSinkG(char * data, ...)
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
static void QUjB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        QUjB2G1VaSinkG(data, data);
    }
}

static void QUjB2G2VaSinkG(char * data, ...)
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
static void QUjB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        QUjB2G2VaSinkG(data, data);
    }
}

static void QUjG2B1VaSinkB(char * data, ...)
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
static void QUjG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FALSE)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(STATIC_CONST_TRUE)
    {
        QUjG2B1VaSinkB(data, data);
    }
}

static void QUjG2B2VaSinkB(char * data, ...)
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
static void QUjG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(STATIC_CONST_TRUE)
    {
        QUjG2B2VaSinkB(data, data);
    }
}

void YmTflsJxLtyimraORorH_QUj()
{
    QUjG2B1();
    QUjG2B2();
    QUjB2G1();
    QUjB2G2();
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
#ifndef OMITQUj
    printLine("Calling QUj()...");
    YmTflsJxLtyimraORorH_QUj();
    printLine("Finished QUj()");
#endif /* a */
#ifndef OMITdpL
    printLine("Calling dpL()...");
    YmTflsJxLtyimraORorH_dpL();
    printLine("Finished dpL()");
#endif /* a */
    return 0;
}

#endif
