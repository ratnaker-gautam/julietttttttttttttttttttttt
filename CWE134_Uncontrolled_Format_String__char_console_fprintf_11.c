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
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITnGl

void dhDLGOQtCqglQMHKraLh_nGl()
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
        /* a a a a a a a a a a a a a */
        fprintf(stdout, data);
    }
}

#endif /* a */

#ifndef OMITAyp

/* a a a a a a a a a a a a a */
static void AypB2G1()
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
        /* a a a a a a a a a */
        fprintf(stdout, "%s\n", data);
    }
}

/* a a a a a a a a a a a a a a */
static void AypB2G2()
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
        /* a a a a a a a a a */
        fprintf(stdout, "%s\n", data);
    }
}

/* a a a a a a a a a a a a a */
static void AypG2B1()
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
        /* a a a a a a a a a a a a a */
        fprintf(stdout, data);
    }
}

/* a a a a a a a a a a a a a a */
static void AypG2B2()
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
        /* a a a a a a a a a a a a a */
        fprintf(stdout, data);
    }
}

void dhDLGOQtCqglQMHKraLh_Ayp()
{
    AypB2G1();
    AypB2G2();
    AypG2B1();
    AypG2B2();
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
#ifndef OMITAyp
    printLine("Calling Ayp()...");
    dhDLGOQtCqglQMHKraLh_Ayp();
    printLine("Finished Ayp()");
#endif /* a */
#ifndef OMITnGl
    printLine("Calling nGl()...");
    dhDLGOQtCqglQMHKraLh_nGl();
    printLine("Finished nGl()");
#endif /* a */
    return 0;
}

#endif
