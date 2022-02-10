
#include <iostream>
using namespace std;

int x = 0; // Global variable accesible to all the functions

int fun(int n)
{
    // static int x = 0; //--> static variable
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    cin >> r;
    cout << fun(r) << endl; // 25 ;
    cout << fun(r) << endl; // 50 ; 5 times 10 is added so it will be 50
    cout << fun(r) << endl; // 75

    return 0;
}

/*
//Code for print sum on n natural nos.

#include<iostream>
using namespace std;

int fun (int n)
{
    if (n>0)
    {
        return fun(n-1)+ n;
    }
    return 0; // This shows fun(0) will return 0
}


int main()
{
    int r;
    cin>>r;
    cout<<fun(r);
    return 0;
}
*/