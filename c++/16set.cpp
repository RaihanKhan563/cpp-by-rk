// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {10, 20, 30};

//     for(int x : s)
//         cout << x << " ";

//     return 0;
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {

//     // Create set
//     set<int> s;

//     // insert()
//     s.insert(50);
//     s.insert(10);
//     s.insert(20);
//     s.insert(30);
//     s.insert(10); // duplicate ignored

//     cout<<"Initial Set: ";
//     for(int x:s)
//         cout<<x<<" ";

//     cout<<endl;

//     // size()
//     cout<<"Size = "<<s.size()<<endl;

//     // front element
//     cout<<"First = "<<*s.begin()<<endl;

//     // last element
//     cout<<"Last = "<<*s.rbegin()<<endl;

//     // find()
//     if(s.find(20)!=s.end())
//         cout<<"20 Found"<<endl;

//     // count()
//     cout<<"Count of 30 = "<<s.count(30)<<endl;

//     // erase()
//     s.erase(20);

//     cout<<"After erase: ";
//     for(int x:s)
//         cout<<x<<" ";

//     cout<<endl;

//     // empty()
//     if(s.empty())
//         cout<<"Set Empty"<<endl;
//     else
//         cout<<"Set Not Empty"<<endl;

//     // clear()
//     s.clear();

//     cout<<"After clear size = "<<s.size()<<endl;

//     return 0;
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {

// set<int> s={10,20,30,40};

// if(s.find(20)!=s.end())
// {
//     cout<<"Found";
// }
// else
// {
//     cout<<"Not Found";
// }

// }
#include <iostream>
#include <set>
using namespace std;

int main(){

set<int> s={10,20,30,40};

for (auto it=s.begin();it!=s.end();it++){
    cout<<*it<<endl;
}

}
// ^
// begin() → first
// end() → after last
// it → iterator
// *it → value
// it++ → next element