#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if(age==0 || age<0){
        cout<<"invalid age";
    }
    else if (age>=18){
        cout<<"you can vote";

    }
    else{
        cout<<"you can not vote";
    }
    return 0;
}