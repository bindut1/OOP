#include <iostream>
using namespace std;

class LSH
{
    protected: 
        string MaLSH;
        int Khoa;
    public:
        LSH(string = "", int = 0);
        ~LSH();
        void showLSH();
        virtual void show();
};