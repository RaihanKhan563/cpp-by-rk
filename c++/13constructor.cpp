#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s ,int sp)
    {
        this->name = n;
        this->salary = s;
        this->sec_pass=sp;
    }
    void printDetails()
    {                                                                                                                     // printDetails() : this is a method , void: used for no specific type
        cout << "the name of our first employee " << this->name << ", and his salary is " << this->salary << "$" << endl; // this-> : used for pointing the current object (instance) on which the method is being executed.
    }
    void get_sp()
    {
        cout << "the secrect password of employee is" << this->sec_pass<<endl;
    }

private:
    int sec_pass;
};

int main()
{
    Employee har("Harry constructor", 344, 22694);
    har.printDetails();
    har.get_sp();
    cout<<har.name; //it will  work due to public
    // cout<<har.sec_pass; //it will not work due to privacy

    return 0;
}

// public  → everyone can access
// private → only class can access
// this->  → current object
// constructor → automatic setup
// method → function inside class