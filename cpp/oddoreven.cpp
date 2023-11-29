#include <iostream>

bool oddoreven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int x = 2, y = 3;

    if (oddoreven(x))
    {
        std::cout << x << " is even" << std::endl;
    }
    else
    {
        std::cout << x << " is odd" << std::endl;
    }
        if (oddoreven(y))
    {
        std::cout << y << " is even" << std::endl;
    }
    else
    {
        std::cout << y << " is odd" << std::endl;
    }

    return 0;
}
