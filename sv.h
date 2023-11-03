/* #include <iostream>
#include "LSH.h"
#include "HP.h"
using namespace std;

class sv
{
    private:
        int MSSV;
        bool Gender;
        double GPA;
    public:
    sv(int = 0, bool = true, double = 0.0);
    ~sv();
    friend ostream& operator<<(ostream&, const sv&);
    friend istream& operator>>(istream&, sv&);
    bool operator==(const sv&)const;
    int getMS();
}; */

/* class sv : public LSH, public HP
{
    private:
        string name;
    public:
        sv(string = "", int = 0, int = 0, int = 0, string = "");
        ~sv();
        void showSV();
        void show();
}; */
#include <iostream>
using namespace std;

class sv
{
    protected:
        string MSSV;
        string name;
        bool Gender;
        double DTB;
    public:
        sv(string = "", string = "", bool = true, double = 0.0);
        virtual ~sv();
        virtual void show();
        friend ostream& operator<<(ostream&, const sv&);
        virtual bool operator==(const sv&);
};
