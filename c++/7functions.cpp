#include <iostream>
using namespace std;

// f(x)=x^2 +2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{ // main is a function
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    cout<<"the func return "<<add(a,b);

    return 0;
}