#include <iostream>
using namespace std;

class Point2
{
    //public, private, protected
    public:
        int xVal;
        int yVal;
    public:
        Point2(int x = 1, int y = 1)
        {
            xVal = x;
            yVal = y;
        } 
        Point2(const Point2& p)
        {
            xVal = p.xVal;
            yVal = p.yVal;
        }
        ~Point2() {};
        void TT(int x)
        {
            xVal += x;
            yVal += x;
        }
        void Show()
        {
            cout << xVal << ", " << yVal << endl;
        }
};

