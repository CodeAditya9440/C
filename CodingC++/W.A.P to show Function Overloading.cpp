#include <iostream>
using namespace std;

void area(int r)
{
    cout << "Area of circle = " << 3.14 * r * r << endl;
}

void area(int l, int b)
{
    cout << "Area of rectangle = " << l * b << endl;
}

int main()
{
    area(5);     // Circle
    area(4, 6);  // Rectangle
    return 0;
}