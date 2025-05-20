/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a a a a a a a a
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

#define ENV_VARIABLE "ADD"

#ifdef _WIN32
#define GETENV getenv
#else
#define GETENV getenv
#endif

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITiWJ

static void iWJVaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

void FhfYgVTLcvbqHGwGLoqf_iWJ()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            /* a a a a a a a a */
            if (environment != NULL)
            {
                /* a a a a a a a a */
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        iWJVaSinkB(data, data);
    }
}

#endif /* a */

#ifndef OMITJbx

static void JbxB2G1VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void JbxB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            /* a a a a a a a a */
            if (environment != NULL)
            {
                /* a a a a a a a a */
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        JbxB2G1VaSinkG(data, data);
    }
}

static void JbxB2G2VaSinkG(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a */
        vprintf("%s", args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void JbxB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* a a a a a a a a */
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            /* a a a a a a a a */
            if (environment != NULL)
            {
                /* a a a a a a a a */
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        JbxB2G2VaSinkG(data, data);
    }
}

static void JbxG2B1VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a */
static void JbxG2B1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(STATIC_CONST_FIVE==5)
    {
        JbxG2B1VaSinkB(data, data);
    }
}

static void JbxG2B2VaSinkB(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        /* a a a a a a a a a a a a a */
        vprintf(data, args);
        va_end(args);
    }
}

/* a a a a a a a a a a a a a a */
static void JbxG2B2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a a a */
        strcpy(data, "fixedstringtest");
    }
    if(STATIC_CONST_FIVE==5)
    {
        JbxG2B2VaSinkB(data, data);
    }
}

void FhfYgVTLcvbqHGwGLoqf_Jbx()
{
    JbxG2B1();
    JbxG2B2();
    JbxB2G1();
    JbxB2G2();
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
#ifndef OMITJbx
    printLine("Calling Jbx()...");
    FhfYgVTLcvbqHGwGLoqf_Jbx();
    printLine("Finished Jbx()");
#endif /* a */
#ifndef OMITiWJ
    printLine("Calling iWJ()...");
    FhfYgVTLcvbqHGwGLoqf_iWJ();
    printLine("Finished iWJ()");
#endif /* a */
    return 0;
}

#endif
