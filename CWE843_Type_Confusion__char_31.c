/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a a a a a a a a a
 * a a a a a a a a
 * a
 *    a a a a a a a a a
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITZfZ

void MvsOlaLIlnZbkExMxozt_ZfZ()
{
    void * data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    {
        void * dataCopy = data;
        void * data = dataCopy;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

#endif /* a */

#ifndef OMITEfT

/* a a a a a a a */
static void EfTG2B()
{
    void * data;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    {
        void * dataCopy = data;
        void * data = dataCopy;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

void MvsOlaLIlnZbkExMxozt_EfT()
{
    EfTG2B();
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
#ifndef OMITEfT
    printLine("Calling EfT()...");
    MvsOlaLIlnZbkExMxozt_EfT();
    printLine("Finished EfT()");
#endif /* a */
#ifndef OMITZfZ
    printLine("Calling ZfZ()...");
    MvsOlaLIlnZbkExMxozt_ZfZ();
    printLine("Finished ZfZ()");
#endif /* a */
    return 0;
}

#endif
