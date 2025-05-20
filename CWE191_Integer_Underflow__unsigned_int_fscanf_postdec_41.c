/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a a a
 * a a
 *    a a a a a a a a a a a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITjDq

static void jDqSink(unsigned int data)
{
    {
        /* a a a a a a a a */
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

void TGyzEHRDPzVwkUBTtbXS_jDq()
{
    unsigned int data;
    data = 0;
    /* a a a a a a a a a */
    fscanf (stdin, "%u", &data);
    jDqSink(data);
}

#endif /* a */

#ifndef OMITWrp

/* a a a a a a a */
static void WrpG2BSink(unsigned int data)
{
    {
        /* a a a a a a a a */
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

static void WrpG2B()
{
    unsigned int data;
    data = 0;
    /* a a a a a a a a a a a a a a a */
    data = -2;
    WrpG2BSink(data);
}

/* a a a a a a a */
static void WrpB2GSink(unsigned int data)
{
    /* a a a a a a a a a a */
    if (data > 0)
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

static void WrpB2G()
{
    unsigned int data;
    data = 0;
    /* a a a a a a a a a */
    fscanf (stdin, "%u", &data);
    WrpB2GSink(data);
}

void TGyzEHRDPzVwkUBTtbXS_Wrp()
{
    WrpB2G();
    WrpG2B();
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
#ifndef OMITWrp
    printLine("Calling Wrp()...");
    TGyzEHRDPzVwkUBTtbXS_Wrp();
    printLine("Finished Wrp()");
#endif /* a */
#ifndef OMITjDq
    printLine("Calling jDq()...");
    TGyzEHRDPzVwkUBTtbXS_jDq();
    printLine("Finished jDq()");
#endif /* a */
    return 0;
}

#endif
