/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a
 * a a a a a a a
 * a a
 *    a a a a a a a a a
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

namespace WYrlKtOchSvMYLtsYZSH
{

#ifndef OMIThvk

void hvk()
{
    char * data;
    data = new char[100];
    if(staticFive==5)
    {
        /* a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 100-1); /* a a a */
        data[100-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        /* a a a a a a a a a a a */
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
        delete [] data;
    }
}

#endif /* a */

#ifndef OMITUiP

/* a a a a a a a a a a a a */
static void UiPG2B1()
{
    char * data;
    data = new char[100];
    if(staticFive!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        /* a a a a a a a a a a a */
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
        delete [] data;
    }
}

/* a a a a a a a a a a a a a a */
static void UiPG2B2()
{
    char * data;
    data = new char[100];
    if(staticFive==5)
    {
        /* a a a a a a a a a a a a a a a a a a a a */
        memset(data, 'A', 50-1); /* a a a */
        data[50-1] = '\0'; /* a a */
    }
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        /* a a a a a a a a a a a */
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; /* a a a a a a a */
        printLine(data);
        delete [] data;
    }
}

void UiP()
{
    UiPG2B1();
    UiPG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace WYrlKtOchSvMYLtsYZSH; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITUiP
    printLine("Calling UiP()...");
    UiP();
    printLine("Finished UiP()");
#endif /* a */
#ifndef OMIThvk
    printLine("Calling hvk()...");
    hvk();
    printLine("Finished hvk()");
#endif /* a */
    return 0;
}

#endif
