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

namespace pKlUrQSBHfhEYTCWJdem_61
{

#ifndef OMITdHW

/* a a a */
list<int>  dHWSource(list<int>  data);

void dHW()
{
    list<int>  data;
    data = dHWSource(data);
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

#ifndef OMITilu

/* a a a a a a a */
list<int>  iluG2BSource(list<int>  data);

static void iluG2B()
{
    list<int>  data;
    data = iluG2BSource(data);
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
list<int>  iluB2GSource(list<int>  data);

static void iluB2G()
{
    list<int>  data;
    data = iluB2GSource(data);
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

void ilu()
{
    iluG2B();
    iluB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace pKlUrQSBHfhEYTCWJdem_61; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITilu
    printLine("Calling ilu()...");
    ilu();
    printLine("Finished ilu()");
#endif /* a */
#ifndef OMITdHW
    printLine("Calling dHW()...");
    dHW();
    printLine("Finished dHW()");
#endif /* a */
    return 0;
}

#endif
