#include<iostream>
using namespace std;

int fun (int n)
{
    if (n>100) return n-10;
    else fun(fun(n+11));
}

int main()
{
    int r;
    cin >> r;
    cout<< fun(r);
    return 0;
}