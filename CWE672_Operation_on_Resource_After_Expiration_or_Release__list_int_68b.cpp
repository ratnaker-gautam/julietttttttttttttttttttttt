/* a a a a
a a
a a a a
a a a
*/
/*
 * a
 * a a a a a a a a a
 * a  a a a a a a a a a
 * a a a a a a a a a a
 * a
 *    a a a a a a a a a a a
 *    a a a a a a a a a a a a a a a
 * a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace NzlLVwkFwEHAaOsuJITb_68
{

extern list<int>  iTRData;
extern list<int>  DseG2BData;
extern list<int>  DseB2GData;

#ifndef OMITiTR

void iTRSink()
{
    list<int>  data = iTRData;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            /* a a a a a a a a a a a a a */
            cout << " " << *i;
        }
        cout << endl;
    }
}

#endif /* a */

#ifndef OMITDse

/* a a a a a a a */
void DseG2BSink()
{
    list<int>  data = DseG2BData;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            if (!*i)
            {
                data.clear();
            }
            /* a a a a a a a a a a a a a */
            cout << " " << *i;
        }
        cout << endl;
    }
}

/* a a a a a a a */
void DseB2GSink()
{
    list<int>  data = DseB2GData;
    {
        list<int> ::iterator i;
        cout << "The list contains: ";
        for( i = data.begin(); i != data.end(); i++)
        {
            /* a a a a a a a a a a */
            cout << " " << *i;
        }
        cout << endl;
    }
}

#endif /* a */

} /* a a */
