/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
 * a a a a a a a a a a a a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITKQF

void LgHVaVIVxUVHwpfzdbTd_KQF()
{
    char * data;
    char dataKQFBuffer[50];
    char datahWGBuffer[100];
    memset(dataKQFBuffer, 'A', 50-1); /* a a a */
    dataKQFBuffer[50-1] = '\0'; /* a a */
    memset(datahWGBuffer, 'A', 100-1); /* a a a */
    datahWGBuffer[100-1] = '\0'; /* a a */
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = dataKQFBuffer;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}

#endif /* a */

#ifndef OMIThWG

/* a a a a a a a a a a a a */
static void hWGG2B1()
{
    char * data;
    char dataKQFBuffer[50];
    char datahWGBuffer[100];
    memset(dataKQFBuffer, 'A', 50-1); /* a a a */
    dataKQFBuffer[50-1] = '\0'; /* a a */
    memset(datahWGBuffer, 'A', 100-1); /* a a a */
    datahWGBuffer[100-1] = '\0'; /* a a */
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a */
        data = datahWGBuffer;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}

/* a a a a a a a a a a a a a a */
static void hWGG2B2()
{
    char * data;
    char dataKQFBuffer[50];
    char datahWGBuffer[100];
    memset(dataKQFBuffer, 'A', 50-1); /* a a a */
    dataKQFBuffer[50-1] = '\0'; /* a a */
    memset(datahWGBuffer, 'A', 100-1); /* a a a */
    datahWGBuffer[100-1] = '\0'; /* a a */
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a */
        data = datahWGBuffer;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* a a */
        /* a a a a a a a a a a a a
         * a a a a a a a a */
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}

void LgHVaVIVxUVHwpfzdbTd_hWG()
{
    hWGG2B1();
    hWGG2B2();
}

#endif /* a */

/* a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a
 * a a a a a a a a a a
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMIThWG
    printLine("Calling hWG()...");
    LgHVaVIVxUVHwpfzdbTd_hWG();
    printLine("Finished hWG()");
#endif /* a */
#ifndef OMITKQF
    printLine("Calling KQF()...");
    LgHVaVIVxUVHwpfzdbTd_KQF();
    printLine("Finished KQF()");
#endif /* a */
    return 0;
}

#endif
