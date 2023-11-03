#include "Point3D.h"

class Point4D : public Point3D
{
    private:
        int tVal;
    public:
        Point4D(int = 3, int = 3, int = 3, int = 3);
        ~Point4D();
        void show();
};