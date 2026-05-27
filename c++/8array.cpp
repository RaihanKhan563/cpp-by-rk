#include <iostream>
using namespace std;

// int main(){
// 1d array
    // int marks[6];
    // for (int i =0;i<6;i++){
    //     cout<<"Enter the marks of"<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }
    // cout << "Array=[";
    // for(int i = 0; i<6; i++){
    //     cout<<marks[i]<<" ";
    // }
    // cout<<"]";
//     return 0;
// }
//2d array
int main()
{
    int arr2d[2][3];
    for (int i = 0; i<2; i++){
        for (int j = 0; j<3; j++){
            cout<<"number in ["<<i<<"]["<<j<<"]"<<endl;
            cin >> arr2d[i][j];

        }
    }
    for (int i = 0; i<2; i++){
        for (int j = 0; j<3; j++){
            cout<<arr2d[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

