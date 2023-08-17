#include <stdio.h>

int add (int n1, int n2){
    int result;
    result = n1 + n2;
    return (result);
}

int main(int argc, char const *argv[])
{
    int x = 10;
    int y = 5;
    printf("%d", add(x, y));
    return 0;
}
