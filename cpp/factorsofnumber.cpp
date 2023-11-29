#include <iostream>
using namespace std;

void factorsofnumber(int x)
{
    cout << "Factors of " << x << " are: ";
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorsofnumber(n);
}