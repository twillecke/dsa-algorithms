#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a= 10; // declare and initilize variable
    int *p; // declare pointer
    p=&a; // assign address of variable 'a' to pointer 'p'

    printf("Value at point 'p' address: %d\n", *p); // print value pointer address
    printf("Address of pointer 'p': %p\n", p); // print address stored in pointer
    printf("Size of 'p': %lu bytes\n", sizeof(p));



    int b[5] = {2, 4, 6, 8, 10};
    int *q;
    q=b; // assigning array to pointer should have no '&';

    for(int i=0;i<5;i++)
    {
        printf("%d", q[i]); // array is accessible through variable 'b' and pointer 'q'
    };
    


    int *r; // variable 'r' is stored inside stack frame
    r=(int *)malloc(5*sizeof(int)); // array of five integers is stored in heap frame through malloc()

    r[0]=10; r[1]=15; r[2]=20; r[3]=25; r[4]=30;

      for(int i=0;i<5;i++)
    {
        printf("%d", r[i]); // array is accessible through variable 'b' and pointer 'q'
    };

    return 0;
}
