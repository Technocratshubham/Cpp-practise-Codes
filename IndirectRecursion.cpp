#include <iostream>
using namespace std;

void funB(int n); // funB prototype

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1); // before using this funB it should be decalred/defined
    }
}

void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}
int main()
{
    int r;
    cin >> r;
    funA(r);
    return 0;
}