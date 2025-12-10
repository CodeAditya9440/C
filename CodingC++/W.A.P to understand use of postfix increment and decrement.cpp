#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "Original a = " << a << endl;
    cout << "Postfix Increment a++ = " << a++ << endl;
    cout << "After a++ value of a = " << a << endl;
    cout << "Postfix Decrement a-- = " << a-- << endl;
    cout << "After a-- value of a = " << a << endl;
    return 0;
}