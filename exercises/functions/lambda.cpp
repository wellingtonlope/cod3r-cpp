#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int { return x + y; };
auto subtract = [](int x, int y) { return x + y; };

using binaryop = int (*)(int, int);

int exec(binaryop func, int a, int b)
{
    return (*func)(a, b);
}

int main()
{
    cout << add(10, 20) << endl;
    cout << subtract(20, 26) << endl;

    cout << exec(add, 33, 44) << endl;
    cout << exec(subtract, 7, 2) << endl;

    cout << exec([](int x, int y) { return x * y; }, 7, 9) << endl;

    return 0;
}