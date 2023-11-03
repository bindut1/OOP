#include "sv.h"

class svCNTT : public sv
{
    private:
        string LT;
    public:
    svCNTT(string = "", string = "", bool = true, double = 0.0, string = "");
    virtual ~svCNTT();
    void show();
    bool operator==(const svCNTT&);
    friend ostream& operator<< (ostream&, const svCNTT&);    
};