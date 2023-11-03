/* #include <iostream>
#include "qlsv.h"
using namespace std;

qlsv::qlsv()
{
    this->p = NULL; 
    this->n = 0;
}

qlsv::~qlsv()
{
    delete[] this->p;
}

sv& qlsv::operator[](const int& index)
{
    static sv NGU;
    return (index >= 0 && index < this->n) ? *(this->p + index) : NGU;
}

ostream& operator<<(ostream& o, const qlsv& S)
{
    for(int i = 0; i < S.n; i++)
        o << *(S.p + i);
    return o;
}

void qlsv::add(const sv& s) 
{
    if(this->n == 0)
    {
        this->p = new sv[this->n + 1];
        *(this->p + this->n) = s;
    }
    else
    {
        sv *tmp = new sv[this->n];
        for(int i = 0; i < this->n; i++) tmp[i] = (*this)[i];
        delete this->p;
        this->p = new sv[this->n + 1];
        for(int i = 0; i < this->n; i++) (*this)[i] = tmp[i];
        *(this->p + this->n) = s;
    }
    this->n++;
}

void qlsv::insert(const sv& s, const int& x)
{
    if(x < 0 || x >= this->n) return;
    if(this->n == 0)
    {
        this->p = new sv[this->n + 1];
        *(this->p + this->n) = s;
    }
    else
    {
        sv *tmp = new sv[this->n + 1];
        for(int i = 0; i < x; i++) tmp[i] = (*this)[i];
        for(int i = x + 1; i < this->n; i++) tmp[i] = (*this)[i - 1];
        tmp[x] = s;
        delete this->p;
    }
    this->n++;
}

int qlsv::indexOf(const sv& S)
{
    for(int i = 0; i < this->n; i++)
    {
        if(S == (*this)[i]) return i;
    }
    return -1;
}

void qlsv::remoteAt(const int& x)
{
    if(x >= this->n || x < 0) return;
    sv *tmp = new sv[this->n - 1];
    for(int i = 0; i < x; i++)
        tmp[i] = (*this)[i];
    for(int i = x; i < this->n - 1; i++)
        tmp[i] = (*this)[i+1];
    delete this->p;
    this->p = tmp;
    this->n--;
}

void qlsv::remote(const sv& S)
{
    if(indexOf(S) == -1) return;
    else remoteAt(indexOf(S));
} */

/* void qlsv::update(const int& m)
{   
    for(int i = 0; i < this->n; i++)
    {
        if((*this)[i].getMS() == m)
        {
            cin >> (*this)[i];
            return;
        }
    }
} */