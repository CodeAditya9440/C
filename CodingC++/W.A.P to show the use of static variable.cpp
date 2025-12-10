#include <iostream>
using namespace std;

void display()
{
    static int count = 0; 
    count++;
    cout << "Count = " << count << endl;
}

int main()
{
    display();
    display();
    display();
    return 0;
}