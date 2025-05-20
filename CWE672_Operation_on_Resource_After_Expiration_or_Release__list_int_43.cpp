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
 * a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace rKkBuzXaAODUpeXxBLXo
{

#ifndef OMITLHL

void LHLSource(list<int>  &data)
{
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
}

void LHL()
{
    list<int>  data;
    LHLSource(data);
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

#ifndef OMITehn

/* a a a a a a a */
static void ehnG2BSource(list<int>  &data)
{
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
}

static void ehnG2B()
{
    list<int>  data;
    ehnG2BSource(data);
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
static void ehnB2GSource(list<int>  &data)
{
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
}

static void ehnB2G()
{
    list<int>  data;
    ehnB2GSource(data);
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

void ehn()
{
    ehnG2B();
    ehnB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace rKkBuzXaAODUpeXxBLXo; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITehn
    printLine("Calling ehn()...");
    ehn();
    printLine("Finished ehn()");
#endif /* a */
#ifndef OMITLHL
    printLine("Calling LHL()...");
    LHL();
    printLine("Finished LHL()");
#endif /* a */
    return 0;
}

#endif
