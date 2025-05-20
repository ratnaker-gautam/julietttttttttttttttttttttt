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
 * a a a a a a
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace hHOysXXCogQSIyzQsfri
{

#ifndef OMITAtg

void Atg()
{
    list<int>  data;
    while(1)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
        break;
    }
    while(1)
    {
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
        break;
    }
}

#endif /* a */

#ifndef OMITGcg

/* a a a a a a a a a a a a a a a */
static void GcgB2G()
{
    list<int>  data;
    while(1)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
        break;
    }
    while(1)
    {
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
        break;
    }
}

/* a a a a a a a a a a a a a a a */
static void GcgG2B()
{
    list<int>  data;
    while(1)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
        break;
    }
    while(1)
    {
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
        break;
    }
}

void Gcg()
{
    GcgB2G();
    GcgG2B();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace hHOysXXCogQSIyzQsfri; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITGcg
    printLine("Calling Gcg()...");
    Gcg();
    printLine("Finished Gcg()");
#endif /* a */
#ifndef OMITAtg
    printLine("Calling Atg()...");
    Atg();
    printLine("Finished Atg()");
#endif /* a */
    return 0;
}

#endif
