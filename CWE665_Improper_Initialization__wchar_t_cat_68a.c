/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a
 * a  a a a a a
 * a a a
 * a a
 *    a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

wchar_t * YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_FIXData;
wchar_t * YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_pkeG2BData;

#ifndef OMITFIX

/* a a a */
void YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68b_FIXSink();

void YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_FIX()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a a */
    ; /* a a a a a a a */
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_FIXData = data;
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68b_FIXSink();
}

#endif /* a */

#ifndef OMITpke

/* a a a */
void YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68b_pkeG2BSink();

/* a a a a a a a */
static void pkeG2B()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    /* a a a a */
    data[0] = L'\0'; /* a a */
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_pkeG2BData = data;
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68b_pkeG2BSink();
}

void YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_pke()
{
    pkeG2B();
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
#ifndef OMITpke
    printLine("Calling pke()...");
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_pke();
    printLine("Finished pke()");
#endif /* a */
#ifndef OMITFIX
    printLine("Calling FIX()...");
    YkgpHyIGmkKPHlafVoQX__wchar_t_cat_68_FIX();
    printLine("Finished FIX()");
#endif /* a */
    return 0;
}

#endif
