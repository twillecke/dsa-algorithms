#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p; // declare pointer 'p'
    p=new int[5]; // allocate five int array to heap frame

    p[0]=10; p[1]=15; p[2]=20; p[3]=25; p[4]=30; // initialize array elements

    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    };

    delete []p; // releasing memory allocated in heap frame
    return 0;
}
