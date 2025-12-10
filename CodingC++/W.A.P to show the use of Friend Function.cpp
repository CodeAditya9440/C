#include <iostream>
using namespace std;

class Sample
{
    int a, b;
public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void display(Sample obj);
};

void display(Sample obj)
{
    cout << "Sum = " << obj.a + obj.b << endl;
}

int main()
{
    Sample s;
    s.input();
    display(s);
    return 0;
}