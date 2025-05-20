/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a
 * a a a
 * a
 *    a a a a a a a a a
 *    a a a a
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

typedef union
{
    int * unionFirst;
    int * unionSecond;
} AXgQonzYAlosHdIGgeLR_unionType;

#ifndef OMITUZD

void AXgQonzYAlosHdIGgeLR_UZD()
{
    int * data;
    AXgQonzYAlosHdIGgeLR_unionType myUnion;
    /* a a a a a a */
    data = NULL;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        printIntLine(*data);
    }
}

#endif /* a */

#ifndef OMITMto

/* a a a a a a a */
static void MtoG2B()
{
    int * data;
    int tmpData = 5;
    AXgQonzYAlosHdIGgeLR_unionType myUnion;
    /* a a a */
    {
        data = &tmpData;
    }
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        printIntLine(*data);
    }
}

/* a a a a a a a */
static void MtoB2G()
{
    int * data;
    AXgQonzYAlosHdIGgeLR_unionType myUnion;
    /* a a a a a a */
    data = NULL;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        /* a a a a a a a a a */
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

void AXgQonzYAlosHdIGgeLR_Mto()
{
    MtoG2B();
    MtoB2G();
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
#ifndef OMITMto
    printLine("Calling Mto()...");
    AXgQonzYAlosHdIGgeLR_Mto();
    printLine("Finished Mto()");
#endif /* a */
#ifndef OMITUZD
    printLine("Calling UZD()...");
    AXgQonzYAlosHdIGgeLR_UZD();
    printLine("Finished UZD()");
#endif /* a */
    return 0;
}

#endif
