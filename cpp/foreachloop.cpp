#include <array>
#include <iostream>

int main() {
    std::array<int, 3> arr = {2, 4, 6}; // declaring array with array module

    // for each loop receiving a reference to the array's elements; data type could be 'auto' as well
    for (int &number : arr) { 
        number *= 2; // compund assignment operator
        std::cout << number << std::endl;
    }

    std::cout << arr[0];
}