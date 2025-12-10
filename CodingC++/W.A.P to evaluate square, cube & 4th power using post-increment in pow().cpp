#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square = " << pow(n, 2) << endl;
    cout << "Cube = " << pow(n, 3) << endl;
    cout << "4th Power = " << pow(n, 4) << endl;

    return 0;
}