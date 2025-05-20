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
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#ifndef OMITeXy

void WMpLvoELYOeKMrcOsttY_eXy()
{
    void * data;
    /* a a */
    data = NULL;
    switch(6)
    {
    case 6:
    {
        /* a a a a a a */
        char charBuffer = 'a';
        data = &charBuffer;
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

#endif /* a */

#ifndef OMITOej

/* a a a a a a a a a a a a */
static void OejG2B1()
{
    void * data;
    /* a a */
    data = NULL;
    switch(5)
    {
    case 6:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    default:
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    break;
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

/* a a a a a a a a a a a a a */
static void OejG2B2()
{
    void * data;
    /* a a */
    data = NULL;
    switch(6)
    {
    case 6:
    {
        /* a a a a a a */
        int intBuffer = 8;
        data = &intBuffer;
    }
    break;
    default:
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
        break;
    }
    /* a a a a a a a a a */
    printIntLine(*((int*)data));
}

void WMpLvoELYOeKMrcOsttY_Oej()
{
    OejG2B1();
    OejG2B2();
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
#ifndef OMITOej
    printLine("Calling Oej()...");
    WMpLvoELYOeKMrcOsttY_Oej();
    printLine("Finished Oej()");
#endif /* a */
#ifndef OMITeXy
    printLine("Calling eXy()...");
    WMpLvoELYOeKMrcOsttY_eXy();
    printLine("Finished eXy()");
#endif /* a */
    return 0;
}

#endif
