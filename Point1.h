#include <iostream>
using namespace std;

class Point1
{
    //public, private, protected
    public:
        int xVal;
        int yVal;
    public:
        Point1();
        Point1(int = 1, int = 1);
        Point1(const Point1&);
        ~Point1();
        void TT(int);
        void Show();
};

void Point1::TT(int x)
{
    //xVal += x;
    this->xVal += x;
    //*(this).yVal += x;
    this->yVal += x;
}

void Point1::Show()
{
    cout << this->xVal << ", " << this->yVal << endl;
}

Point1::Point1()
{
    this->xVal = 1;
    this->yVal = 1;
}

Point1::Point1(int xVal, int y)
{
    this->xVal = xVal;
    this->yVal = y;
}

Point1::Point1(const Point1& p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point1::~Point1()
{
    cout << "Huy Point1 : " << this->xVal << ", " << this->yVal << endl;
}