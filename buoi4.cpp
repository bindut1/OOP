#include <iostream>
#include "Poin.h"
using namespace std;

main()
{
    Point p1;
    Point p2(2, 3);
    Point p3(p1);
    p1.Show();
    p2.Show();
    p3.Show();
}