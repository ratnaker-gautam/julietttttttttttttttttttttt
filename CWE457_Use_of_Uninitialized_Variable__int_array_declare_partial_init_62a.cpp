/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a
 * a a a a a a a a a a
 * a a a
 * a a
 *    a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

namespace QsMtfYKENHANFEwfsHhe__int_array_declare_partial_init_62
{

#ifndef OMITLLu

/* a a a */
void LLuSource(int * &data);

void LLu()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    LLuSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

#endif /* a */

#ifndef OMITKzp

/* a a a a a a a */
void KzpG2BSource(int * &data);

static void KzpG2B()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    KzpG2BSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

/* a a a a a a a */
void KzpB2GSource(int * &data);

static void KzpB2G()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    KzpB2GSource(data);
    /* a a a a a a a */
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}

void Kzp()
{
    KzpG2B();
    KzpB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace QsMtfYKENHANFEwfsHhe__int_array_declare_partial_init_62; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITKzp
    printLine("Calling Kzp()...");
    Kzp();
    printLine("Finished Kzp()");
#endif /* a */
#ifndef OMITLLu
    printLine("Calling LLu()...");
    LLu();
    printLine("Finished LLu()");
#endif /* a */
    return 0;
}

#endif
