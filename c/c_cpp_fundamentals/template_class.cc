#include <iostream>
using namespace std;

template <class T> // add template generic 'T' to 'Arithmetic' class
class Arithmetic
{
private:
    T a; // 'T' will be replaced dynamically at function/class call
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar(10, 5); // int will replace all template "T" in called function/class
    cout << ar.add();
}