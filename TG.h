#include "Point.h"

class TG
{
    private:
        Point A, B, C;
    public:
        TG(const Point&, const Point&, const Point&);
        TG(int, int , int , int, int, int);
        ~TG();
        void ShowTG();
};