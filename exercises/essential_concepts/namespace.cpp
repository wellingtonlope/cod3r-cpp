#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b + 10;
}

namespace calc
{
    double buffer;
    class Product {};
    int add(int a, int b)
    {
        return a + b + 20;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
}

int main()
{
    calc::buffer = 12.34;
    cout << add(10, 20) << endl;
    cout << calc::add(10, 20) << endl;
    cout << calc::subtract(10, 20) << endl;
    return 0;
}