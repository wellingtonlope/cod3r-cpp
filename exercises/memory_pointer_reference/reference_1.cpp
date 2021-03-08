#include <iostream>
using namespace std;

// https://docs.microsoft.com/pt-br/cpp/cpp/references-cpp?view=vs-2019
int main() {
    int a = 10; // 32 bits = 4 bytes
    cout << a << "\t" << &a << endl;

    string name = "Paul";
    cout << name << "\t" << &name << endl;

    return 0;
}