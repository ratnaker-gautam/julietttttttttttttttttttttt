/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITQav

static void QavSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a*a a a a a a */
        char result = data * 2;
        printHexCharLine(result);
    }
}

void ZscjgLwDSxkenmvmbdkT_Qav()
{
    char data;
    data = ' ';
    /* a a a a a a */
    data = (char)RAND32();
    QavSink(data);
}

#endif /* a */

#ifndef OMITwRi

/* a a a a a a a */
static void wRiG2BSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a*a a a a a a */
        char result = data * 2;
        printHexCharLine(result);
    }
}

static void wRiG2B()
{
    char data;
    data = ' ';
    /* a a a a a a a a a a a a a a a */
    data = 2;
    wRiG2BSink(data);
}

/* a a a a a a a */
static void wRiB2GSink(char data)
{
    if(data > 0) /* a a a a a a */
    {
        /* a a a a a a a a a a */
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

static void wRiB2G()
{
    char data;
    data = ' ';
    /* a a a a a a */
    data = (char)RAND32();
    wRiB2GSink(data);
}

void ZscjgLwDSxkenmvmbdkT_wRi()
{
    wRiB2G();
    wRiG2B();
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
#ifndef OMITwRi
    printLine("Calling wRi()...");
    ZscjgLwDSxkenmvmbdkT_wRi();
    printLine("Finished wRi()");
#endif /* a */
#ifndef OMITQav
    printLine("Calling Qav()...");
    ZscjgLwDSxkenmvmbdkT_Qav();
    printLine("Finished Qav()");
#endif /* a */
    return 0;
}

#endif
