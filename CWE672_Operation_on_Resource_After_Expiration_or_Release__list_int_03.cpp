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

namespace ForPGoHNAUeHBzccuBBK
{

#ifndef OMITLso

void Lso()
{
    list<int>  data;
    if(5==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(5==5)
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

#ifndef OMITegx

/* a a a a a a a a a a a a a */
static void egxB2G1()
{
    list<int>  data;
    if(5==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(5!=5)
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
static void egxB2G2()
{
    list<int>  data;
    if(5==5)
    {
        /* a a a a a a a a */
        data.push_back(100);
        data.push_back(0);
    }
    if(5==5)
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
static void egxG2B1()
{
    list<int>  data;
    if(5!=5)
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
    if(5==5)
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
static void egxG2B2()
{
    list<int>  data;
    if(5==5)
    {
        /* a a a a a a a */
        data.push_back(100);
        data.push_back(200);
    }
    if(5==5)
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

void egx()
{
    egxB2G1();
    egxB2G2();
    egxG2B1();
    egxG2B2();
}

#endif /* a */

} /* a a */

/* a a a a a a a a a a a a a
   a a a a a a a a a a a a a a
   a a a a a a a a a a a a a
   a a a a a a a a a a */

#ifdef INCLUDEMAIN

using namespace ForPGoHNAUeHBzccuBBK; /* a a a a a a a a a */

int main(int argc, char * argv[])
{
    /* a a */
    srand( (unsigned)time(NULL) );
#ifndef OMITegx
    printLine("Calling egx()...");
    egx();
    printLine("Finished egx()");
#endif /* a */
#ifndef OMITLso
    printLine("Calling Lso()...");
    Lso();
    printLine("Finished Lso()");
#endif /* a */
    return 0;
}

#endif
