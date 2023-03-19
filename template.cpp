#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a; // besides int a make T a a of generic type
    T b;

public:
    Arithetic(T a, T b);
    int add();
    int sub();
};

template <class T>
Arithetic<T>::Arithetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
int Arithetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
int Arithetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

template <class T>
int main()
{
    Arithmetic<int> ar(10, 5);
    Arithmetic<float> ar(10.5, 5.9);
    Arithmetic<char> ar('a', 'b');
    cout << ar.add();
    cout << ar.sub();
    return 0;
}