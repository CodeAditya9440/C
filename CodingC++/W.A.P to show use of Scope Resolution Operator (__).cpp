#include <iostream>
using namespace std;

int x = 50; // global variable

int main()
{
    int x = 10; // local variable
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl; // using scope resolution
    return 0;
}