// SWITCH & CONDITIONAL

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age)
    {
        case 12:
            cout << "You are 12 years old";
            break;
        case 18:
            cout << "You are 18 Years old";
            break;

        default:
            cout << "You are neither 12 nor 18 years old";
            break;
    };

    //Note: Arranging orders or numbers in conditions are important.
    // if (age > 150 || age < 4)
    // {
    //     cout << "Inavlid age";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can Vote";
    // }
    // else
    // {
    //     cout << "You cannot vote";
    // }

    return 0;
};
