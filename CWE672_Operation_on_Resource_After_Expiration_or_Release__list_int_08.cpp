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
 *
 * */

#include "std_testcase.h"

#include <wchar.h>
#include <list>
#include <iostream>

using namespace std;

/* a a a a a a a a a a a a
   a a a a a a a a a a a a
   a a a a */
static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

namespace lCosZazNqLvrcGqQprJu
{

#ifndef OMITDeK

void DeK()
{
    list<int>  data;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticReturnsTrue())
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

#ifndef OMITqlg

/* a a a a a a a a a a a a a */
static void qlgB2G1()
{
    list<int>  data;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticReturnsFalse())
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
static void qlgB2G2()
{
    list<int>  data;
    if(staticReturnsTrue())
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticReturnsTrue())
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
static void qlgG2B1()
{
    list<int>  data;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
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
static void qlgG2B2()
{
    list<int>  data;
    if(staticReturnsTrue())
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(staticReturnsTrue())
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

void qlg()
{
    qlgB2G1();
    qlgB2G2();
    qlgG2B1();
    qlgG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace lCosZazNqLvrcGqQprJu; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITqlg
    printLine("Calling qlg()...");
    qlg();
    printLine("Finished qlg()");
#endif /* a */
#ifndef OMITDeK
    printLine("Calling DeK()...");
    DeK();
    printLine("Finished DeK()");
#endif /* a */
    return 0;
}

#endif
