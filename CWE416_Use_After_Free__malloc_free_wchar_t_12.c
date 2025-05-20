/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a
 * a  a a a a a a a a a a a a
 * a a a a a a a a a
 * a
 *    a a a
 *    a a a a
 * a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITXVX

void exkJabHSeVOFhhoJpXpV_XVX()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

#endif /* a */

#ifndef OMITeHa

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void eHaB2G()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a a a a a a a a */
        free(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        /* a a a a a a a a a a a a */
        /* a a */
        ; /* a a a a a a a */
    }
}

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a */
static void eHaG2B()
{
    wchar_t * data;
    /* a a */
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* a a a a a a a a */
    }
    if(globalReturnsTrueOrFalse())
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
    else
    {
        /* a a a a a a a a a a */
        printWLine(data);
        /* a a a a a a a a a a a a */
    }
}

void exkJabHSeVOFhhoJpXpV_eHa()
{
    eHaB2G();
    eHaG2B();
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
#ifndef OMITeHa
    printLine("Calling eHa()...");
    exkJabHSeVOFhhoJpXpV_eHa();
    printLine("Finished eHa()");
#endif /* a */
#ifndef OMITXVX
    printLine("Calling XVX()...");
    exkJabHSeVOFhhoJpXpV_XVX();
    printLine("Finished XVX()");
#endif /* a */
    return 0;
}

#endif
