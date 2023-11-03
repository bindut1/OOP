#include "TG.h"
#include <iostream>
using namespace std;

TG::TG(const Point& pa, const Point& pb, const Point& pc)
    : A(pa), B(pb), C(pc)
{

}

TG::TG(int xa, int ya, int xb, int yb, int xc, int yc)
    :A(xa, ya), B(xb, yb), C(xc, yc)
{}

TG::~TG()
{
    cout << "Huy TG" << endl;
}
/* 
void TG::ShowTG()
{
    this->A.Show();
    this->B.Show();
    this->C.Show();
} */