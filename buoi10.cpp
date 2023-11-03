#include "Point.h"
//#include "Point3D.h"
#include "vector.h"
#include <iostream>
using namespace std;

main()
{
    vector<Point, 3> v1;
    cout << v1;
}

/* main()
{
    int a, b;
    bool check = true;
    do
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        try
        {
            if(b == 0)
                //throw string("Nhap lai");
                //throw Point(1, 2);
                throw Point3D(3, 4, 5);
            else
            {
                cout << "c = " << (a / b) << endl;
                check = false;
            }
        }
        // catch(string e)
        // {
        //     cout << e << endl;
        // }
        catch(Point3D e)
        {
            cout << e << endl;
        }
        catch(Point e)
        {
            cout << e << endl;
        }
        catch(...)
        {
            cout << "XLNL" << endl;
        }
    } while(check);
} */

/* void chia(int &a, int &b)
{
    // cout << (a / b) << endl;
    if(b == 0)
        throw string("KKK");
    else
        cout << (a / b) << endl;
    /* catch(string e)
    {
        cout << e << " Chia" << endl;
    } */
//} 

/*void TT(int &a, int &b)
{
    try
    {
        chia(a, b);
    }
    catch(string e)
    {
        cout << e << " TT" << endl;
    }
}

main()
{
    int a = 3, b = 0;
    try
    {
        TT(a, b);
    }
    catch(string e)
    {
        cout << e << " main" << endl;
    }
} */