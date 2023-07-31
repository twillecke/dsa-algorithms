#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    struct Rectangle r={10, 5};
    struct Rectangle *p;
    p=&r;

    cout<<p->length<<endl; // accesing struct object through pointer with '->';
    cout<<(*p).length<<endl; // accesing struct object through pointer with precedence of '*p'

    struct Rectangle *q;
    q=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    q->length = 22;

    cout<<q->length<<endl;

    return 0;
}
