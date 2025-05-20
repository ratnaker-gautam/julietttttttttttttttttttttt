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
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#ifndef OMITABS

static void ABSSink(wchar_t * data)
{
    /* a a a a a a a a a a a a a */
    wprintf(data);
}

void zlvsBHvNbIUGsFPthmfj_ABS()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = wcslen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                /* a a a a a a */
                data[dataLen] = L'\0';
            }
        }
    }
    ABSSink(data);
}

#endif /* a */

#ifndef OMITiOf

/* a a a a a a a */
static void iOfG2BSink(wchar_t * data)
{
    /* a a a a a a a a a a a a a */
    wprintf(data);
}

static void iOfG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    /* a a a a a a a a a a a a */
    wcscpy(data, L"fixedstringtest");
    iOfG2BSink(data);
}

/* a a a a a a a */
static void iOfB2GSink(wchar_t * data)
{
    /* a a a a a a a a a */
    wprintf(L"%s\n", data);
}

static void iOfB2G()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        /* a a a a a */
        size_t dataLen = wcslen(data);
        /* a a a a a a a a a a a a */
        if (100-dataLen > 1)
        {
            /* a a a a a a a */
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                /* a a a a a a a a a a a a a
                 * a a a */
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                /* a a a a a a */
                data[dataLen] = L'\0';
            }
        }
    }
    iOfB2GSink(data);
}

void zlvsBHvNbIUGsFPthmfj_iOf()
{
    iOfB2G();
    iOfG2B();
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
#ifndef OMITiOf
    printLine("Calling iOf()...");
    zlvsBHvNbIUGsFPthmfj_iOf();
    printLine("Finished iOf()");
#endif /* a */
#ifndef OMITABS
    printLine("Calling ABS()...");
    zlvsBHvNbIUGsFPthmfj_ABS();
    printLine("Finished ABS()");
#endif /* a */
    return 0;
}

#endif
