#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l={10,20,30,40};
    for (int x : l){
        cout << x <<" ";
    }
    cout<<endl;
    l.push_back(50);
    l.push_front(0);
    for (int x : l){
        cout << x <<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    for (int x : l){
        cout << x <<" ";
    }
    cout<<endl;
}