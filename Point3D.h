#include "Point.h"

class Point3D : public Point
{
    protected:
        int zVal;
    public:
        Point3D(int = 2, int = 2, int = 2);
        ~Point3D();
        // void show3D();
        // void show();
    //    void A();
        friend ostream& operator<<(ostream&, const Point3D&);
};

