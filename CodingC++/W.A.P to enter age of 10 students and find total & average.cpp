#include <iostream>
using namespace std;

int main()
{
    int age[10], total = 0;
    float average;

    cout << "Enter age of 10 students:\n";

    for(int i = 0; i < 10; i++)
    {
        cin >> age[i];
        total += age[i];
    }

    average = total / 10.0;

    cout << "Total age = " << total << endl;
    cout << "Average age = " << average << endl;

    return 0;
}