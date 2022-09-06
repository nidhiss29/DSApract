#include <iostream>

using namespace std;

int main()
{
    /* int A[5];
     int B[] = {26,7,89, 5,6, };
     A[0] = 10;
     A[1] = 6;
     A[2] = 7;
     cout << sizeof(A) << endl;
     cout << A[1] << endl;
     printf("%d", A[2]); // or include stdio
     cout << sizeof(B) << endl;
     for (int i = 0; i < sizeof(A); i++)
     {
         cout << A[i] << " ";
     }
     for (int x : A)
     {
         cout << x << endl;
     } */
    cout << "Enter value no of values in an array";
    int n;
    cin >> n;
    int a[n] = {10, 7, 8, 4};

    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}