#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length; // int size 4 bytes
    int breadth; // int size 4 bytes
    char x; // char size 1 byte !!! Why struct size 12 bytes then? Machines access
    // data faster by searching at each (SIZE OF NEAREST DATA TYPE SIZE), in his case,
    // 4 bytes (integer), even though char will use only 1 byte. This is called memory padding.
};

int main(int argc, char const *argv[])
{
    struct Rectangle r1={10,5}; // struct declaration and init as variable r1

    printf("%lu", sizeof(r1)); 

    return 0;
}
