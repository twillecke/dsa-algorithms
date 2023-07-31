#include<iostream>
#include<stdio.h>

using namespace std;


int area(int length, int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    return 2*(length + breadth);
}

int main(int argc, char const *argv[])
{
    int length=0, breadth=0;

    printf("Enter Length and Breadth:\n");
    cin>>length>>breadth;

    int a=area(length, breadth);
    int p=perimeter(length, breadth);

    printf("Area=%d\nPerimeter=%d", a, p);

    return 0;
}
