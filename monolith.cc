#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int length=0, breadth=0;

    printf("Enter Length and Breadth:\n");
    cin>>length>>breadth;

    int peri=2*(length + breadth);
    int area=length*breadth;

    printf("Area=%d\nPerimeter=%d", area, peri);

    return 0;
}
