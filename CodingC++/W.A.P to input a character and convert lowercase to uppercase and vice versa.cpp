#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z')
        cout << "Uppercase: " << char(ch - 32);
    else if(ch >= 'A' && ch <= 'Z')
        cout << "Lowercase: " << char(ch + 32);
    else
        cout << "Not an alphabet";

    return 0;
}