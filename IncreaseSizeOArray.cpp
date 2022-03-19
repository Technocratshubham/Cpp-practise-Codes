// Increase Size of array

#include <iostream>
using namespace std;
int main()
{
    int *p, *q;
    // p = (int *)malloc(5 * sizeof(int));
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // q = (int *)malloc(10 * sizeof(int));
    p = new int[10];

    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    // free(p);
    delete[] p; // p is released
    p = q;      // p is pointing on q
    q = NULL;   // now q is made null, so its not pointing anywhere

    for (int i = 0; i < 5; i++)
        cout << p[i];

    return 0;
}