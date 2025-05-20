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
 * a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

/* a a a a a a a a a a a a
   a a a a a a a a a a a
   a */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITeet

void AlGkCXXBEyMYDnuLuPGD_eet()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

#endif /* a */

#ifndef OMIToNG

/* a a a a a a a a a a a a a */
static void oNGB2G1()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a a */
static void oNGB2G2()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a */
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a */
        if (data != NULL)
        {
            /* a a a a a a a a a a */
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

/* a a a a a a a a a a a a a */
static void oNGG2B1()
{
    char * data;
    if(STATIC_CONST_FIVE!=5)
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a */
        data = "oNG";
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

/* a a a a a a a a a a a a a a */
static void oNGG2B2()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a */
        data = "oNG";
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a */
        printHexCharLine(data[0]);
    }
}

void AlGkCXXBEyMYDnuLuPGD_oNG()
{
    oNGB2G1();
    oNGB2G2();
    oNGG2B1();
    oNGG2B2();
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
#ifndef OMIToNG
    printLine("Calling oNG()...");
    AlGkCXXBEyMYDnuLuPGD_oNG();
    printLine("Finished oNG()");
#endif /* a */
#ifndef OMITeet
    printLine("Calling eet()...");
    AlGkCXXBEyMYDnuLuPGD_eet();
    printLine("Finished eet()");
#endif /* a */
    return 0;
}

#endif
