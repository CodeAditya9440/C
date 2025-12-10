#include <iostream>
using namespace std;

class Sample
{
public:
    int x;
    Sample(int a)
    {
        x = a;
    }

    Sample operator+(Sample s)
    {
        return Sample(x + s.x);
    }
};

int main()
{
    Sample s1(5), s2(7);
    Sample s3 = s1 + s2;
    cout << "Result = " << s3.x;
    return 0;
}