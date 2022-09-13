#include <iostream>
#include <stdlib.h>

using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10, 5};
    struct rectangle *p = &r;
    cout << r.length << " " << r.breadth << endl;
    cout << p->length << " " << p->breadth << endl;

    // heap pointer dynamic allocation of rectangle structure

    struct rectangle *pr;
    pr = (struct rectangle *)malloc(sizeof(struct rectangle));

    p->length = 15;
    p->breadth = 90;
    cout << p->length << " " << p->breadth << endl;

    return 0;
}