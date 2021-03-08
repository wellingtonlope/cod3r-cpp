#include <iostream>
using namespace std;

int main() {

    //                0   1   2   3   4   5
    int values[6] = {31, 44, 58, 91, 25, 100};
    cout << values[0] << endl;
    cout << values[4] << endl;
    cout << sizeof values[0] << endl;
    cout << sizeof values << endl;
    cout << sizeof values / sizeof values[0] << endl;

    return 0;
}