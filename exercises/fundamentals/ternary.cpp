#include <iostream>
using namespace std;

int main() {
    bool sunny = true;
    string result = sunny ? ":)" : ":("; // exp (T/F) ? T : F;
    cout << result << endl;

    double balance = 1234.56;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char creaditOrDebt;
    cout << "Credit (c)/Debt (d): ";
    cin >> creaditOrDebt;

    cout << "Balance [Before]: " << balance << endl;

    balance += creaditOrDebt == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl;

    return 0;
}