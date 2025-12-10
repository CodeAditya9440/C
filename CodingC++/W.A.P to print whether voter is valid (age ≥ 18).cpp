#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18)
        cout << "Voter is valid" << endl;
    else
        cout << "Voter is not valid" << endl;

    return 0;
}