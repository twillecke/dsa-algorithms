#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main(int argc, char const *argv[])
{
    int l, b;
    printf("Enter Length and Breadth:\n");
    cin >> l >> b;

    Rectangle r = {l, b};

    int a = r.area();
    int p = r.perimeter();

    printf("Area=%d\nPerimeter=%d", a, p);

    return 0;
}
