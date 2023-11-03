// #include "vector.h"

// vector::vector(int n, int t)
//     : n(n)
// {
//     this->p = new int[this->n];
//     for(int i = 0; i < this->n; i++)
//     {
//         (*this)[i] = t;
//         /* *(this->p + i) = t;
//         this->p[i] = t;
//         *((*this).p + i) = t;
//         (*this).p[i] = t; */
//     }
// }

// vector::~vector()
// {
//     delete[] this->p;
// }

// void vector::show()
// {
//     for(int i = 0; i < this->n; i++)
//     {
//     //    cout << *(this->p + i) << " ";
//         cout << (*this)[i] << " ";
//     }
// }

// ostream& operator<<(ostream& o, const vector& v)
// {
//     for(int i = 0; i < v.n; i++)
//     {
//         o << *(v.p + i) << " ";
//         //o << v[i] << " "; loi vi toan tu [] truy cap 2 chieu ma lai gan vo v la mot vector const chi truy cap duoc mot chieu
//     }
//     return o;
// }

// int& vector::operator[](const int& index)
// {
//     static int NGU = 0; //de tra ve mot bien tinh khi truy cap ngoai pham vi cua mang
//     return (index >= 0 && index < this->n) ? *(this->p + index) : NGU;
// }

// vector::vector(const vector &v)
//     : n(v.n)
// {
//     this->p = new int[this->n];
//     for(int i = 0; i < this->n; i++)
//         (*this)[i] = *(v.p + i);
// }

// const vector &vector::operator=(const vector &v)
// {
//     if(this != &v)
//     {
//         this->p = NULL;
//         this->n = v.n;
//         this->p = new int[this->n];
//         for(int i = 0; i < this->n; i++)
//             (*this)[i] = *(v.p + i);
//     }
//     return *this;
// }

#include "vector.h"
template <typename T, int U>
vector<T, U>::vector()
    : n(U)
{
    this->p = new T[this->n];
    for (int i = 0; i < this->n; i++)
        cin >> *(this->p + i);
}
template <typename T, int U>
vector<T, U>::~vector()
{
    delete[] this->p;
}
template <typename T, int U>
void vector<T, U>::show()
{
    for (int i = 0; i < this->n; i++)
        cout << *(this->p + i) << " ";
}
template <typename T, int U>
T &vector<T, U>::operator[](const int &index)
{
    // return (index >= 0 && index < this->n) ? *(this->p + index) : NULL;
    return *(this->p + index);
}
template <typename K, int V>
ostream &operator<<(ostream &o, const vector<K, V> &v)
{
    for (int i = 0; i < v.n; i++)
    {
        o << *(v.p + i);
    }
    return o;
}