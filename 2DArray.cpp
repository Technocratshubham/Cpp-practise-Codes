// 3 ways to form  2D array

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    //1 Method//
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    //2 Method//
    int *B[3]; // array of pointers

    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    //3 Method//
    int **C; // just a double pointers

    C = new int *[3]; // Arrays for rows which is created in heap
    C[0] = new int [4]; 
    C[1] = new int [4];
    C[2] = new int [4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << B[i][j] <<" "; 
        }
        cout << endl;
    }
    return 0;
}
