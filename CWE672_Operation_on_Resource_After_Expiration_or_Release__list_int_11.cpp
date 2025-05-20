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
 * a a a a a a a a
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

namespace jJWzRsgHUwlZLGPDBSEh
{

#ifndef OMITFtq

void Ftq()
{
    list<int>  data;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(globalReturnsTrue())
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
}

#endif /* a */

#ifndef OMITDWR

/* a a a a a a a a a a a a a */
static void DWRB2G1()
{
    list<int>  data;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
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
}

/* a a a a a a a a a a a a a a */
static void DWRB2G2()
{
    list<int>  data;
    if(globalReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(globalReturnsTrue())
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
}

/* a a a a a a a a a a a a a */
static void DWRG2B1()
{
    list<int>  data;
    if(globalReturnsFalse())
    {
        /* a a a a a a a a a a a */
        printLine("Benign, fixed string");
    }
    else
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(globalReturnsTrue())
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
}

/* a a a a a a a a a a a a a a */
static void DWRG2B2()
{
    list<int>  data;
    if(globalReturnsTrue())
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(globalReturnsTrue())
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
}

void DWR()
{
    DWRB2G1();
    DWRB2G2();
    DWRG2B1();
    DWRG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace jJWzRsgHUwlZLGPDBSEh; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITDWR
    printLine("Calling DWR()...");
    DWR();
    printLine("Finished DWR()");
#endif /* a */
#ifndef OMITFtq
    printLine("Calling Ftq()...");
    Ftq();
    printLine("Finished Ftq()");
#endif /* a */
    return 0;
}

#endif
