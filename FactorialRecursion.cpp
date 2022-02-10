#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1; // idhar return 1 pe dyna de
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";

    else
        return fact(n - 1) * n;
}

int Ifact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int r;
    cout << "Enter the number " << endl;
    cin >> r;
    cout << "Factorial of " << r << " "<< "is" << " "<< Ifact(r) << endl;
    return 0;
}