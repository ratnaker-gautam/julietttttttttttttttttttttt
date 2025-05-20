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
 * a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace PNVPxrbepwpDNNCnjXap
{

#ifndef OMITrLn

void rLn()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
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

#ifndef OMITUGZ

/* a a a a a a a */
static void UGZG2B()
{
    list<int>  data;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
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
static void UGZB2G()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
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

void UGZ()
{
    UGZG2B();
    UGZB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace PNVPxrbepwpDNNCnjXap; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITUGZ
    printLine("Calling UGZ()...");
    UGZ();
    printLine("Finished UGZ()");
#endif /* a */
#ifndef OMITrLn
    printLine("Calling rLn()...");
    rLn();
    printLine("Finished rLn()");
#endif /* a */
    return 0;
}

#endif
