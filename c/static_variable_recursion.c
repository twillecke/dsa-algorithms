#include <stdio.h>

int fun(int n)
{
    static int x=0;
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
    r=fun(5);
    printf("%d", r);
    return 0;
}
