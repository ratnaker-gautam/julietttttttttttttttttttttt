/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a
 * a a a a a
 * a a
 *    a a a a a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

namespace IRkxZlMsuGWjnCbtVxbR
{

#ifndef OMITlhz

void lhz()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* a a a a a */
        data = new char[50];
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
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
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITYtZ

/* a a a a a a a a a a a a */
static void YtZG2B1()
{
    char * data;
    data = NULL;
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
        /* a a a a a */
        data = new char[100];
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
        break;
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
        delete [] data;
    }
}

/* a a a a a a a a a a a a a */
static void YtZG2B2()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* a a a a a */
        data = new char[100];
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
        break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
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
        delete [] data;
    }
}

void YtZ()
{
    YtZG2B1();
    YtZG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace IRkxZlMsuGWjnCbtVxbR; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITYtZ
    printLine("Calling YtZ()...");
    YtZ();
    printLine("Finished YtZ()");
#endif /* a */
#ifndef OMITlhz
    printLine("Calling lhz()...");
    lhz();
    printLine("Finished lhz()");
#endif /* a */
    return 0;
}

#endif
