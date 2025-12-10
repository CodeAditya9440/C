#include <iostream>
using namespace std;

class Demo
{
public:
    Demo() // Constructor
    {
        cout << "Constructor is called!" << endl;
    }
};

int main()
{
    Demo obj;
    return 0;
}