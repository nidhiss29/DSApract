#include <iostream>
using namespace std;
int add(int a, int b) // formal parameters
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int num1 = 10, num2 = 5;
    int d = add(num1, num2); // actual parameters
    cout << d;
    return 0;
}