#include <iostream>
using namespace std;
class HP
{
    protected:
        int MaHP;
        int SL;
    public:
        HP(int = 0, int = 0);
        ~HP();
        void showHP();
        virtual void show();
};
