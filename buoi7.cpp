#include <iostream>
#include <string>
//#include "Point.h"
#include "Point3D.h"
using namespace std;

main()
{
    /* int x1 = 2, x2 = 2;
    int y1 = x1++;
    int y2 = ++x2;
    cout << x1 << ", "  << y1 << ", " << x2 << ", " << y2 << endl; */
    
    /* Point p1(1, 2), p2(1, 2);
    Point p3 = p1++;
    Point p4 = ++p2;
    cout << p1 << p3;
    cout << p2 << p4; */

    /* Point3D p3d(3, 4, 5);
    p3d.show3D(); */ 

    Point p2d(8, 9);
    Point3D p3d(3, 4, 5);
    p3d.show();
    p3d.A();
}
