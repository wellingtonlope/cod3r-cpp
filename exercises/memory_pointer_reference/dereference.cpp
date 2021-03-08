#include <iostream>
using namespace std;

int main() {

    double pi = 3.14;
    double &piRef = pi;

    cout << piRef << endl;
    cout << &pi << endl;

    // * -> deference operator
    // Think of as "Get Value At..."
    cout << *&pi << endl;
    cout << &*&*&pi << endl;

    // * is used to create a pointer!

    return 0;
}