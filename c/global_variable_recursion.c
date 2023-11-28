#include <stdio.h>

int x = 0; // x is global variable affected by all function which increment it

int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x; // x will be added only on returning time when x = 5;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int r;
    r = fun(5);
    printf("%d\n", r);
    r = fun(5);
    printf("%d\n", r);
    return 0;
}
