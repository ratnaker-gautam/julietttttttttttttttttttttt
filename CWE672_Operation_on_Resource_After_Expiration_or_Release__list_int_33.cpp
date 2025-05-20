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
 * a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace oOMkRJkwZhawYmXjAqVP
{

#ifndef OMITtJK

void tJK()
{
    list<int>  data;
    list<int>  &dataRef = data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    {
        list<int>  data = dataRef;
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
}

#endif /* a */

#ifndef OMITXvJ

/* a a a a a a a */
static void XvJG2B()
{
    list<int>  data;
    list<int>  &dataRef = data;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
    {
        list<int>  data = dataRef;
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
}

/* a a a a a a a */
static void XvJB2G()
{
    list<int>  data;
    list<int>  &dataRef = data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    {
        list<int>  data = dataRef;
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
}

void XvJ()
{
    XvJG2B();
    XvJB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace oOMkRJkwZhawYmXjAqVP; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITXvJ
    printLine("Calling XvJ()...");
    XvJ();
    printLine("Finished XvJ()");
#endif /* a */
#ifndef OMITtJK
    printLine("Calling tJK()...");
    tJK();
    printLine("Finished tJK()");
#endif /* a */
    return 0;
}

#endif
