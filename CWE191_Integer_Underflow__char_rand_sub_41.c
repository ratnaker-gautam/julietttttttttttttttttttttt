/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a a a
 *    a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITVkM

static void VkMSink(char data)
{
    {
        /* a a a a a a a a a a */
        char result = data - 1;
        printHexCharLine(result);
    }
}

void ZAFoQxycXgWKqtvvoqCk_VkM()
{
    char data;
    data = ' ';
    /* a a a a a a */
    data = (char)RAND32();
    VkMSink(data);
}

#endif /* a */

#ifndef OMITsYR

/* a a a a a a a */
static void sYRG2BSink(char data)
{
    {
        /* a a a a a a a a a a */
        char result = data - 1;
        printHexCharLine(result);
    }
}

static void sYRG2B()
{
    char data;
    data = ' ';
    /* a a a a a a a a a a a a a a a */
    data = -2;
    sYRG2BSink(data);
}

/* a a a a a a a */
static void sYRB2GSink(char data)
{
    /* a a a a a a a a a a */
    if (data > CHAR_MIN)
    {
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}

static void sYRB2G()
{
    char data;
    data = ' ';
    /* a a a a a a */
    data = (char)RAND32();
    sYRB2GSink(data);
}

void ZAFoQxycXgWKqtvvoqCk_sYR()
{
    sYRB2G();
    sYRG2B();
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
#ifndef OMITsYR
    printLine("Calling sYR()...");
    ZAFoQxycXgWKqtvvoqCk_sYR();
    printLine("Finished sYR()");
#endif /* a */
#ifndef OMITVkM
    printLine("Calling VkM()...");
    ZAFoQxycXgWKqtvvoqCk_VkM();
    printLine("Finished VkM()");
#endif /* a */
    return 0;
}

#endif
