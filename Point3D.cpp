#include "Point3D.h"

Point3D::Point3D(int x, int y, int z)
    : Point(x, y)
{
    cout << this->xVal << ", " << this->yVal << endl;
    // this->xVal = x;
    // this->yVal = y;
    this->zVal = z;
}

Point3D::~Point3D()
{
}

ostream& operator<<(ostream& o, const Point3D& p)
{
    o << p.xVal << ", " << p.yVal << ", " << p.zVal << endl;
    return o;
}
/*
void Point3D::show3D()
{
    cout << this->xVal << ", " << this->yVal << ", " << this->zVal << endl;
}

void Point3D::show()
{
    Point::show();
    cout << this->zVal << endl;
} */

// void Point3D::A()
// {
//     cout << "3DA" << endl;
// }

