#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct reactangle
{
    int len;
    int bred;
};
int main()
{
    /*int a = 10;
    int *p = &a;
    // p = &a;
    cout << a << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &a;*/

    // pointer in an array in stack sec

    /*int arr[5] = {3, 5, 7, 8, 9};
    int *p;
    p = arr;
    // p=&arr[0];
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    } */

    // pointer to array in heap section

    int *p;
    p = new int[5];
    // p = (int *)malloc(5 * sizeof(int));
    p[0] = 9, p[1] = 10, p[2] = 1, p[3] = 4, p[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p; // used in c++
                // free(p) used in c

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}