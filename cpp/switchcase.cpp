#include <iostream>

using namespace std;

int main()
{
    int x = 1;

    switch (x)
    {
    case 1:
        cout << "x is 1" << endl;
        break;
    case 2:
        cout << "x is 2" << endl;
        break;
    default:
        cout << "x is not 1 or 2" << endl;
    }
    return 0;
}