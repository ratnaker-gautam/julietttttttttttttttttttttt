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

#ifdef _WIN32
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
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

#ifndef OMITOto

void OJzffREbRetLIpiuTXZL_Oto()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        {
            char dest[100] = "";
            /* a a a a a a a a a a a a a */
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}

#endif /* a */

#ifndef OMITqYo

/* a a a a a a a a a a a a a */
static void qYoB2G1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
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
    if(staticReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[100] = "";
            /* a a a a a a a a a */
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void qYoB2G2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        {
            char dest[100] = "";
            /* a a a a a a a a a */
            SNPRINTF(dest, 100-1, "%s", data);
            printLine(dest);
        }
    }
}

/* a a a a a a a a a a a a a */
static void qYoG2B1()
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
        {
            char dest[100] = "";
            /* a a a a a a a a a a a a a */
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}

/* a a a a a a a a a a a a a a */
static void qYoG2B2()
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
        {
            char dest[100] = "";
            /* a a a a a a a a a a a a a */
            SNPRINTF(dest, 100-1, data);
            printLine(dest);
        }
    }
}

void OJzffREbRetLIpiuTXZL_qYo()
{
    qYoB2G1();
    qYoB2G2();
    qYoG2B1();
    qYoG2B2();
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
#ifndef OMITqYo
    printLine("Calling qYo()...");
    OJzffREbRetLIpiuTXZL_qYo();
    printLine("Finished qYo()");
#endif /* a */
#ifndef OMITOto
    printLine("Calling Oto()...");
    OJzffREbRetLIpiuTXZL_Oto();
    printLine("Finished Oto()");
#endif /* a */
    return 0;
}

#endif
