#include <iostream>
using namespace std;

int main() {

    /*
        What is a pointer
        -------------------------------------
        Pointer is a variable whose avlue is
        the adress of another variable, i.e.,
        direct address of the memory location.
    */
    
    int value = 98765;
    int& ref = value;
    int* pot = &value;

    cout << value << "\t" << ref << "\t" << *pot << endl;
    cout << &value << "\t" << &ref << "\t" << pot << endl;

    return 0;
}