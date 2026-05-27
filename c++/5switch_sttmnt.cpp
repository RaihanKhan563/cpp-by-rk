#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age:" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "12 years old ,cant vote buddy";
        break;
    case 18:
        cout << "eligible for vote";
        break;
    case 0:
        cout << "invalid";
        break;

    default:
        cout << "you are enither 12 nor 18 years old";
        break;
    }
    return 0;
}