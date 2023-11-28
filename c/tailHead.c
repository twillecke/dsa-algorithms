#include <stdio.h>

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        printf("%d ", n);
    };
}

int main(int argc, char const *argv[])
{
    int x = 10;
    fun(10);
    return 0;
}
