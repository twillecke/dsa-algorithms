#include <iostream>

enum day
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

int main(int argc, char const *argv[])
{
    day d = monday;
    std::cout << d << std::endl;

    return 0;
}
