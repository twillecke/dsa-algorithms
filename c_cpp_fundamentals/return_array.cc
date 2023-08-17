#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int * fun(int size)
{
    int *p;
    p=new int[size]; // create array in Heap memory

    for(int i=0;i<size;i++)
        p[i]=i+1;
    
    return p; // returns pointer with array address in Heap

}

int main(int argc, char const *argv[])
{
    int *ptr, sz=5;

    ptr = fun(sz); // pointer returned by function is store in ptr pointer in main

    for(int i=0; i<sz; i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
