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

/* a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a */
static int staticFive = 5;

namespace aoNrfWWPKsLtIyZQIsIr
{

#ifndef OMITgfS

void gfS()
{
    list<int>  data;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticFive==5)
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

#ifndef OMITGPN

/* a a a a a a a a a a a a a */
static void GPNB2G1()
{
    list<int>  data;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticFive!=5)
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
static void GPNB2G2()
{
    list<int>  data;
    if(staticFive==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(staticFive==5)
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
static void GPNG2B1()
{
    list<int>  data;
    if(staticFive!=5)
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
    if(staticFive==5)
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
static void GPNG2B2()
{
    list<int>  data;
    if(staticFive==5)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(staticFive==5)
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

void GPN()
{
    GPNB2G1();
    GPNB2G2();
    GPNG2B1();
    GPNG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace aoNrfWWPKsLtIyZQIsIr; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITGPN
    printLine("Calling GPN()...");
    GPN();
    printLine("Finished GPN()");
#endif /* a */
#ifndef OMITgfS
    printLine("Calling gfS()...");
    gfS();
    printLine("Finished gfS()");
#endif /* a */
    return 0;
}

#endif
