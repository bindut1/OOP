#include "HP.h"
HP::HP(int m, int sl)
    : MaHP(m), SL(sl)
{
    cout << "Dung HP" << endl;
}
HP::~HP()
{
    cout << "Huy HP" << endl;
}
void HP::showHP()
{
    cout << this->MaHP << ", " << this->SL << endl;
}
void HP::show()
{
    cout << "HP" << endl;
}