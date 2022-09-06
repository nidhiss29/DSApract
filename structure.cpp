#include <iostream>

using namespace std;
struct rectangle
{
    int len;
    int breadth;
    char x;
} obj;
// OR
struct rectangle r2, r3;
int main()
{
    struct rectangle r = {10, 9};
    // cout << sizeof(r);
    cout << r.len << "\t" << r.breadth << endl;
    r.len = 100;
    cout << r.len << "" << r.breadth;
    return 0;
}