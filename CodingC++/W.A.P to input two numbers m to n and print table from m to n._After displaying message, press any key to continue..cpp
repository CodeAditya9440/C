#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter starting number (m): ";
    cin >> m;
    cout << "Enter ending number (n): ";
    cin >> n;

    cout << "\nTables from " << m << " to " << n << ":\n";

    for(int i = m; i <= n; i++)
    {
        cout << "\nTable of " << i << endl;
        for(int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    cout << "\nPress any key to continue...";
    return 0;
}