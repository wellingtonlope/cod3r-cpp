#include <iostream>
using namespace std;

int main() {
    /*
        Why not "int& xRef = &x;" ?
        -------------------------------------
        At compile time all instances of xRef
        are replaced with the adress of 'x'
    */
    int x = 7;
    int& xRef = x;

    cout << x << "\t" << &x << endl;
    cout << xRef << "\t" << &xRef << endl;

    x++;
    cout << xRef << endl;

    xRef--;
    cout << x << endl;

    return 0;
}