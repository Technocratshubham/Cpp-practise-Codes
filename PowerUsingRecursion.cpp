
#include <iostream>
#include <math.h>
using namespace std;

int power(int m, int n) // Recursive way
{
    if (n == 0)
        return 1;
    else
        return power(m, (n - 1)) * m;
}

int power1(int m, int n) // selection way
{
    if (n == 0) 
        return 1; // for 0 power
    if (n % 2 == 0)
        return power1(m * m, n / 2); //for even power
    else
        return m * power1(m * m, (n - 1) / 2); //for odd power
}

int power2(int m, int n) // Iterative way
{
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    return val;
}

int main()
{
    int r, s;
    cin >> r >> s;
    cout << r << " "<< "Raised to " << s << " "<< "is" << " " << power2(r, s) << endl;
    return 0;
}
