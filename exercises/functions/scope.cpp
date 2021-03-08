#include <iostream>
using namespace std;

const double PI = 3.141592; // nice!
int g = 1;

void func3() {
    g += 100; // to global

    int g = 0;
    g += 100;
    cout << "exec #03..." << endl;
}

void func2() {
    g += 10;
    func3();

    {
        int a = 3;
        cout << a << endl;
    }
    // cout << a << endl;
}

void func1() {
    g += 1;
    func2();
}

int main() {
    func1();

    cout << g;
    return 0;
}

// stack!

// func3()
// func2()
// func1()
// main()