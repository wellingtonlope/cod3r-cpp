#include <iostream>
using namespace std;

int main() {
    // you can't
    // string& badRef;
    // string& badRef = null;

    string greeting = "Hi!";
    string& ref = greeting;

    cout << greeting << "\t" << ref << endl;

    string name = "Peter";
    ref = name;

    cout << name << "\t" << ref << "\t" << greeting << endl;
    cout << &name << "\t" << &ref << "\t" << &greeting << endl;

    ref.append("!!!!!");

    cout << greeting << endl;

    return 0;
}