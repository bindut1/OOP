#include <bits/stdc++.h>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}
//con tro ham dong vai tro la doi so cuc bo
int tt(int x, int y, int (*p)(int, int))
{
    return (*p)(x, y);
}

main()
{
    int (*p)(int, int);
    p = sum;
    cout << sum(2, 1) << " " << (*p)(2, 1) << endl;
    cout << tt(2, 1, p) << " " << tt(2, 1, sum) << endl;
}
/* 
bool td(int ai, int aj)
{
    return ai > aj;
}

bool gd(int ai, int aj)
{
    return ai < aj;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
 */
/* void bubbleSort(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                swap(p[j], p[j+1]);
            }
        }
    }
} */

/* void sort(int *p, int n, bool (*cmp)(int, int) = td)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
                if (td(*(p + i), *(p + j)))
                    if ((*cmp)(*(p + i), *(p + j)))
                        swap(*(p + i), *(p + j));
        }
    }
}

void in(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}

main()
{
    int a[] = {1, 83, 5, 7, 9};
    int n = sizeof(a) / sizeof(int);
    sort(a, n, gd);
    in(a, n);
} */

//cap phat tinh thi cap phat vung nho luc bien dich
/* 
main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    for(int i = 0; i < n; i++)
    {
        p[i] = 2;
    }
    for(int i = 0; i < n; i++) cout << p[i] << " ";
    delete[] p;
   // cout << p;
    if(p == NULL) cout << "hi";
} */

/* main()
{
    int r, c;
    cin >> r >> c;
    int **p = new int*[r];
    for(int i = 0; i < r; i++)
    {
        *(p + i) = new int[c];
        for(int j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "] = ";
            cin >> *(*(p + i) + j);
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "] = " << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }    
    for(int i = 0; i < r; i++) delete[] *(p + i);
    delete[] p;
} */

void nhap(int **p, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        *(p + i) = new int[c];
        for(int j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "] = ";
            cin >> *(*(p + i) + j);
        }
    }
}

void in(int **p, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << "p[" << i << "][" << j << "] = " << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }    
}

void solve(int **p, int r, int c)
{
    for(int i = 0; i < r; i++){
        int max = INT_MIN;
        int min = INT_MAX;
        for(int j = 0; j < c; j++)
        {
            if(*(*(p+i) + j) >= max) max = *(*(p+i) + j);
            if(j == c - 1) cout << "Max hang " << i << " la "<< max << endl;
            if(*(*(p+i) + j) <= min) min = *(*(p+i) + j);
            if(j == c - 1) cout << "Min hang " << i << " la " << min << endl;
        }
    }
}

/* void min(int **p, int r, int c)
{
    for(int i = 0; i < r; i++){
        int min = INT_MAX;
        for(int j = 0; j < c; j++)
        {
            if(*(*(p+i) + j) <= min) min = *(*(p+i) + j);
            if(j == c - 1) cout << min << " ";
        }
    }
}
 */
main()
{
    int r, c;
    cin >> r >> c;
    int **p = new int*[r];
    nhap(p, r, c);
    in(p, r, c);
    solve(p, r, c);
    //min(p, r, c);
}