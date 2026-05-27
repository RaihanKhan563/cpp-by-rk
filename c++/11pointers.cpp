// #include <iostream>
// using namespace std;
// int main(){
//     int a=34;
//     int* ptra;
//     ptra =&a;
//     cout<<"the value of a is "<<*ptra<<endl;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the address of a is "<<ptra<<endl;
//     cout<<"the address of a is "<<&a<<endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {

    int age = 20;      // normal variable
    int* ptr = &age;   // pointer stores address of age

    cout << "age = " << age << endl;
    cout << "address = " << &age << endl;

    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    return 0;
}
// age = House
// &age = House address
// ptr = Paper where address is written
// *ptr = Go to that address and get value