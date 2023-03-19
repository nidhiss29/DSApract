#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
void fun(Rectangle r1)
{
    cout << r1.length << "\n"
         << r1.breadth;
    r1.length = 20;
}
void change(Rectangle *r1)
{
    r1->length = 50;
}
int main()
{
    Rectangle r = {10, 5};
    cout << "length " << r.length;
    cout << "\nBreadth" << r.breadth;
    fun(r);
    cout << "length " << r.length; // didn't change
    change(&r);
    cout << "length " << r.length; // changed
    return 0;
}