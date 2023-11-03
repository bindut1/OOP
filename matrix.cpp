#include "matrix.h"

matrix::matrix(int r, int c, int t)
    : row(r), col(c)
{
    this->p = new int*[this->row];
    for(int i = 0; i < this->row; i++)
    {
        *(this->p + i) = new int[this->col];
        for(int j = 0; j < this->col; j++)
        {
            (*this)(i, j) = t;
            //*(*(this->p + i) + j) = t;
            //this->p[i][j] = t;
        }
    }
}

matrix::~matrix()
{
    for(int i = 0; i , this->row; i++)
    {
        delete[] *(this->p + i);
    }
    delete[] this->p;
}

void matrix::show()
{
    for(int i = 0; i < this->row; i++)
    {
        for(int j = 0; j < this->col; j++)
        {
            //cout << *(*(this->p +i) + j) << " ";
            cout << (*this)(i, j) << " ";
        }
        cout << endl;
    }
}

ostream& operator<<(ostream& o, const matrix& m)
{
    for(int i = 0; i < m.row; i++)
    {   
        for(int j = 0; j < m.col; j++)
        {
            cout << *(*(m.p + i) + j) << " ";
            //cout << m(i, j) << " ";
        }
        cout << endl;
    }
    return o;
}

int& matrix::operator()(const int& r, const int& c)
{
    static int NGU = 0;
    return (r >= 0 && r < this->row && c >= 0 && c < this->col) ? *(*(this->p + r) + c) : NGU;
}