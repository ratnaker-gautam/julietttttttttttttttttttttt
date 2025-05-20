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
 * a a a a/a a a a a a a a a a a a a a a a a a a a a a a
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace RrpLTkjslCKSAUzxNEnJ
{

#ifndef OMITxjU

static void xjUSink(list<int>  data)
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

void xjU()
{
    list<int>  data;
    /* a a a a */
    void (*funcPtr) (list<int> ) = xjUSink;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    /* a a a a */
    funcPtr(data);
}

#endif /* a */

#ifndef OMITsqr

/* a a a a a a a */
static void sqrG2BSink(list<int>  data)
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

static void sqrG2B()
{
    list<int>  data;
    void (*funcPtr) (list<int> ) = sqrG2BSink;
    /* a a a a a a a */
    data.push_back(100);
    data.push_back(200);
    funcPtr(data);
}

/* a a a a a a a */
static void sqrB2GSink(list<int>  data)
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

static void sqrB2G()
{
    list<int>  data;
    void (*funcPtr) (list<int> ) = sqrB2GSink;
    /* a a a a a a a a */
    data.push_back(100);
    data.push_back(0);
    funcPtr(data);
}

void sqr()
{
    sqrG2B();
    sqrB2G();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace RrpLTkjslCKSAUzxNEnJ; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITsqr
    printLine("Calling sqr()...");
    sqr();
    printLine("Finished sqr()");
#endif /* a */
#ifndef OMITxjU
    printLine("Calling xjU()...");
    xjU();
    printLine("Finished xjU()");
#endif /* a */
    return 0;
}

#endif
