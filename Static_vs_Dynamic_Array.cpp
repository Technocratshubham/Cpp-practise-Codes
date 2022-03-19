#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10}; //Array created in stack
    int *p;

    p = new int[5]; //Array  created in hwap using a pointer 'p'
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for (int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    cout<<endl;

    cout<<"Results are declared one after another"<<endl;

    for (int i = 0; i < 5; i++)
        cout<<p[i]<<" ";

    return 0;



} /*
 -------->Theory<--------
 - for creating an array in heap, we must have a pointer, to that pointer we can create an array in heap and assing address of that  array to that pointer
 
 */