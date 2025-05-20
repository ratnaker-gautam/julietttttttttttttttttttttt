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

namespace kJuzAQpfNdLVnSKQMjst
{

#ifndef OMITNpT

void NpT()
{
    list<int>  data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(GLOBAL_CONST_TRUE)
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

#ifndef OMIThFg

/* a a a a a a a a a a a a a */
static void hFgB2G1()
{
    list<int>  data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(GLOBAL_CONST_FALSE)
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
static void hFgB2G2()
{
    list<int>  data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(GLOBAL_CONST_TRUE)
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
static void hFgG2B1()
{
    list<int>  data;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
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
static void hFgG2B2()
{
    list<int>  data;
    if(GLOBAL_CONST_TRUE)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(GLOBAL_CONST_TRUE)
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

void hFg()
{
    hFgB2G1();
    hFgB2G2();
    hFgG2B1();
    hFgG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace kJuzAQpfNdLVnSKQMjst; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMIThFg
    printLine("Calling hFg()...");
    hFg();
    printLine("Finished hFg()");
#endif /* a */
#ifndef OMITNpT
    printLine("Calling NpT()...");
    NpT();
    printLine("Finished NpT()");
#endif /* a */
    return 0;
}

#endif
