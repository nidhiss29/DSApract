#include <iostream>
using namespace std;
/*int add(int a, int b)
//call by value
// formal parameters
{
    int c;
    c = a + b;
    return c;
}  */
/*
int add(int &x, int &y)
{
  // by reference
  int c = x + y;
  return c;
}
int main()
{
  int num1 = 10, num2 = 5;
  int d = add(num1, num2); // actual parameters
  cout << d;
  return 0;
}
*/

// call by address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 5;
    swap(&a, &b);
    return 0;
}