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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

typedef union
{
    void * unionFirst;
    void * unionSecond;
} TePTxQFINKosxfHjeuUA_unionType;

#ifndef OMITdKk

void TePTxQFINKosxfHjeuUA_dKk()
{
    void * data;
    TePTxQFINKosxfHjeuUA_unionType myUnion;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

#endif /* a */

#ifndef OMITNBL

/* a a a a a a a */
static void NBLG2B()
{
    void * data;
    TePTxQFINKosxfHjeuUA_unionType myUnion;
    /* a a */
    data = NULL;
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        /* a a a a a a a a a */
        printIntLine(*((int*)data));
    }
}

void TePTxQFINKosxfHjeuUA_NBL()
{
    NBLG2B();
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
#ifndef OMITNBL
    printLine("Calling NBL()...");
    TePTxQFINKosxfHjeuUA_NBL();
    printLine("Finished NBL()");
#endif /* a */
#ifndef OMITdKk
    printLine("Calling dKk()...");
    TePTxQFINKosxfHjeuUA_dKk();
    printLine("Finished dKk()");
#endif /* a */
    return 0;
}

#endif
