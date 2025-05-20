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

namespace iLmFAhRdHNoLLyjgJaQV
{

#ifndef OMITNRR

static void NRRSink(list<int>  data)
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
}

void NRR()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    NRRSink(data);
}

#endif /* a */

#ifndef OMITkfZ

/* a a a a a a a */
static void kfZG2BSink(list<int>  data)
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
}

static void kfZG2B()
{
    list<int>  data;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
    kfZG2BSink(data);
}

/* a a a a a a a */
static void kfZB2GSink(list<int>  data)
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
}

static void kfZB2G()
{
    list<int>  data;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    kfZB2GSink(data);
}

void kfZ()
{
    kfZG2B();
    kfZB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace iLmFAhRdHNoLLyjgJaQV; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITkfZ
    printLine("Calling kfZ()...");
    kfZ();
    printLine("Finished kfZ()");
#endif /* a */
#ifndef OMITNRR
    printLine("Calling NRR()...");
    NRR();
    printLine("Finished NRR()");
#endif /* a */
    return 0;
}

#endif
