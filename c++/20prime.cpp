#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool prime;
    if(n<=1){
        prime=false;
    }
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime=false;
                break;
            }
                prime=true;
        }
    if (prime)
        cout << "prime";
    else
        cout << "not prime";

    return 0;
}