#include "Point4D.h"

Point4D::Point4D(int x, int y, int z, int t)
    : Point3D(x, y, z), tVal(t)
{
    cout << "Dung Point4D" << endl;
}

Point4D::~Point4D()
{
    cout << "Huy Point4D" << endl;
}

void Point4D::show()
{
    cout << "4D" << endl;
}