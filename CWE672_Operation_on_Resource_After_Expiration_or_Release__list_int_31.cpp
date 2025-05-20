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
 * a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace svDyDsMPdmxbyoPesvBo
{

#ifndef OMITBqs

void Bqs()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    {
        list<int>  dataCopy = data;
        list<int>  data = dataCopy;
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

#ifndef OMITCyF

/* a a a a a a a */
static void CyFG2B()
{
    list<int>  data;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
    {
        list<int>  dataCopy = data;
        list<int>  data = dataCopy;
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
static void CyFB2G()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    {
        list<int>  dataCopy = data;
        list<int>  data = dataCopy;
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

void CyF()
{
    CyFG2B();
    CyFB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */
#ifdef INCLUDEMAIN

using namespace svDyDsMPdmxbyoPesvBo; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITCyF
    printLine("Calling CyF()...");
    CyF();
    printLine("Finished CyF()");
#endif /* a */
#ifndef OMITBqs
    printLine("Calling Bqs()...");
    Bqs();
    printLine("Finished Bqs()");
#endif /* a */
    return 0;
}

#endif
