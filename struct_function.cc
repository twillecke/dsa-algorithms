#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main(int argc, char const *argv[])
{
    Rectangle r = {0, 0};

    int l,b;
    printf("Enter Length and Breadth:\n");
    cin >>l>>b;

    initialize(&r, l, b);

    int a = area(r);
    int p = perimeter(r);

    printf("Area=%d\nPerimeter=%d", a, p);

    return 0;
}
