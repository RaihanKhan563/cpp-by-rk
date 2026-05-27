// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string name ="Raihan";
//     cout<<"the name is "<<name<<endl;
//     cout<<"the name length is "<<name.length()<<endl;
//     cout<<"the name substring at 0,3 is "<<name.substr(0,3)<<endl;

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "Hello World";

    // 1. length()
    cout << "1. Length = " << str.length() << endl;

    // 2. size()
    cout << "2. Size = " << str.size() << endl;

    // 3. append()
    str.append(" C++");
    cout << "3. Append = " << str << endl;

    // 4. at()
    cout << "4. Character at index 1 = " << str.at(1) << endl;

    // 5. substr()
    cout << "5. Substring = " << str.substr(0, 5) << endl;

    // 6. find()
    cout << "6. Find 'World' = " << str.find("World") << endl;

    // 7. replace()
    str.replace(0, 5, "Hi");
    cout << "7. Replace = " << str << endl;

    // 8. insert()
    str.insert(2, " Everyone");
    cout << "8. Insert = " << str << endl;

    // 9. erase()
    str.erase(2, 9);
    cout << "9. Erase = " << str << endl;

    // 10. compare()
    string s2 = "Hi World C++";
    cout << "10. Compare = " << str.compare(s2) << endl;

    // 11. empty()
    cout << "11. Empty = " << str.empty() << endl;

    // 12. clear()
    str.clear();
    cout << "12. After clear = " << str.empty() << endl;

    return 0;
}