#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 12.345678;
    cout << "Number with precision 3: " << setprecision(3) << num << endl;
    cout << "Number with precision 5: " << setprecision(5) << num << endl;
    return 0;
}