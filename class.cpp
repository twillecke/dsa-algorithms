#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() { length = breadth = 1; }
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength() { return length; };    // getter function
    void setLength(int l) { length = l; }; // setter function
    ~Rectangle();                          // destructor function to release memory
};

Rectangle::Rectangle(int l, int b)
{ // scope resolution because function is part of Rectangle class
    length = l;
    breadth = b;
}
int Rectangle::area() { return length * breadth; }
int Rectangle::perimeter() { return 2 * (length + breadth); }
Rectangle::~Rectangle() {}

int main(int argc, char const *argv[])
{
    Rectangle r(10, 5);
    cout << r.area();
    cout << r.perimeter();
    r.setLength(20);
    cout << r.getLength();
    return 0;
}
