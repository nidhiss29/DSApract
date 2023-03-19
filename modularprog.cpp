#include <iostream>
using namespace std;
int areas(int l, int b)
{
    return l * b;
}
int perimeter(int l, int b)
{
    return 2 * (l + b);
}
int main()
{
    int length = 10, breadth = 9;
    int area = areas(length, breadth);
    int peri = perimeter(length, breadth);
    cout << area << peri;
    return 0;
}
// here same we can use structure also to initialize or declare var and then use them by its object

// we can make it object oriented by putting function inside structur eonly so fun and var are all at one place so direct access like class in c++ do structure in c.