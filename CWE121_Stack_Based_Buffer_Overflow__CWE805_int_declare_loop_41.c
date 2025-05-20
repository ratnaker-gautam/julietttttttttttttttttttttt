/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a  a a a a a a a
 * a a a a a a a a
 * a a
 *    a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITsWB

void kAVdENByMjiwHYqoywTQ_sWBSink(int * data)
{
    {
        int source[100] = {0}; /* a a a */
        {
            size_t i;
            /* a a a a a a a a a */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}

void kAVdENByMjiwHYqoywTQ_sWB()
{
    int * data;
    int datasWBBuffer[50];
    int dataCRJBuffer[100];
    /* a a a a a a a a a a a a a a a a a a a
     * a a a a a a a a a a a */
    data = datasWBBuffer;
    kAVdENByMjiwHYqoywTQ_sWBSink(data);
}

#endif /* a */

#ifndef OMITCRJ

void kAVdENByMjiwHYqoywTQ_CRJG2BSink(int * data)
{
    {
        int source[100] = {0}; /* a a a */
        {
            size_t i;
            /* a a a a a a a a a */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}

/* a a a a a a a */
static void CRJG2B()
{
    int * data;
    int datasWBBuffer[50];
    int dataCRJBuffer[100];
    /* a a a a a a a a a a a a a a a */
    data = dataCRJBuffer;
    kAVdENByMjiwHYqoywTQ_CRJG2BSink(data);
}

void kAVdENByMjiwHYqoywTQ_CRJ()
{
    CRJG2B();
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
#ifndef OMITCRJ
    printLine("Calling CRJ()...");
    kAVdENByMjiwHYqoywTQ_CRJ();
    printLine("Finished CRJ()");
#endif /* a */
#ifndef OMITsWB
    printLine("Calling sWB()...");
    kAVdENByMjiwHYqoywTQ_sWB();
    printLine("Finished sWB()");
#endif /* a */
    return 0;
}

#endif
