#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // declare and initialize array; each int takes 4 bytes of memory
    int A[8] = {2, 4, 6, 8, 10, 12, 14};

    // print size of array in bytes;
    std::cout << "Array size: " << sizeof(A) << std::endl; 
    
    // print element of array at index 1 (C++)
    std::cout << A[1] << std::endl;      
    
    // print element of array at index 2 (C)
    printf("%d\n", A[2]);

    // print element of array at not inserted indexes defaults value to 0 (C++)
    std::cout << A[7] << std::endl;      

    // iterate through array with foor loop to print its elements C
    for (int i=0;i<8;i++) {
        printf("%d\n", A[i]);
    } 

    // alternative iteration with 'for each', in C++
    for (int x:A) {
        std::cout << "Element: " <<x<<std::endl;
    }

    return 0;
}
