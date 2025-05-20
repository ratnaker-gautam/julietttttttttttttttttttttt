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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

typedef union
{
    char unionFirst;
    char unionSecond;
} iDQQXnlhWtwutYvMCBdd_unionType;

#ifndef OMITYlm

void iDQQXnlhWtwutYvMCBdd_Ylm()
{
    char data;
    iDQQXnlhWtwutYvMCBdd_unionType myUnion;
    data = ' ';
    /* a a a a a a a a a */
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

#endif /* a */

#ifndef OMITirt

/* a a a a a a a */
static void irtG2B()
{
    char data;
    iDQQXnlhWtwutYvMCBdd_unionType myUnion;
    data = ' ';
    /* a a a a a a a a a a a a a a a */
    data = -2;
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            /* a a a a a a a a */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}

/* a a a a a a a */
static void irtB2G()
{
    char data;
    iDQQXnlhWtwutYvMCBdd_unionType myUnion;
    data = ' ';
    /* a a a a a a a a a */
    fscanf (stdin, "%c", &data);
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        /* a a a a a a a a a a */
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

void iDQQXnlhWtwutYvMCBdd_irt()
{
    irtG2B();
    irtB2G();
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
#ifndef OMITirt
    printLine("Calling irt()...");
    iDQQXnlhWtwutYvMCBdd_irt();
    printLine("Finished irt()");
#endif /* a */
#ifndef OMITYlm
    printLine("Calling Ylm()...");
    iDQQXnlhWtwutYvMCBdd_Ylm();
    printLine("Finished Ylm()");
#endif /* a */
    return 0;
}

#endif
