#include <iostream>
using namespace std;

class A
{
    int x;
};

class B : public A
{
    int y;
};

int main()
{
    A objA;
    B objB;

    cout << "Size of class A = " << sizeof(objA) << " bytes" << endl;
    cout << "Size of class B = " << sizeof(objB) << " bytes" << endl;

    return 0;
}