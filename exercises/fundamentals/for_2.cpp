#include <iostream>
using namespace std;

int main() {
    
    int total = 0;
    int qty = 0;

    for(int number = 0; number != - 1;){
        cout << "Enter a number or -1 to finish: ";
        cin >> number;
        if(number != -1) {
            total += number;
            qty++;
        }
    }

    // cast
    double avg = (double) total / qty;
    cout << avg << endl;

    return 0;
}