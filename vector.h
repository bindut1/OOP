#include <iostream>
using namespace std;
template<typename T, int U>

/* class vector
{
    private:
        int *p;
        int n;
    public:
        vector(int = 2, int = 1);
        vector(const vector&);
        ~vector();
        const vector& operator=(const vector&);
        friend ostream& operator<<(ostream& o, const vector&);
        void show();
        int& operator[](const int&);
}; */

class vector
{
    private:
        T *p;
        int n;
    public:
        vector();
        ~vector();
        void show();
        T& operator[](const int&);
        template<typename K, int V>
        friend ostream& operator<<(ostream&, const vector<K, V>&);
};