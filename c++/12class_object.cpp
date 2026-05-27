#include <iostream>
using namespace std ;
class Employee{
    public: // using this we are declairing the privacy status of the class.  status:1) public,2)private,3)protected
    string name;
    int salary;
    void printDetails(){ // printDetails() : this is a method , void: used for no specific type
        cout<<"the name of our first employee "<<this->name<<", and his salary is "<<this->salary<<"$"<<endl;// this-> : used for pointing the current object (instance) on which the method is being executed.
    }
};

int main(){
    Employee har;
    har.name="harry";
    har.salary=100;
    har.printDetails();


    return 0;
}