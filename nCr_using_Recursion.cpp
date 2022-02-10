#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n; // 5! = 4! * 5
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

int NCR(int n, int r) //Recursive way, Formula based
{
    if (n == r || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

int C (int n, int r)
{
    int t1,t2,t3;
    t1=fact (n);
    t2=fact (r);
    t3=fact (n-r);
    return t1/(t2*t3);

}

int main()
{
    int x,y;
    cin>>x,y;
    cout << C(x,y);
    return 0;
}
