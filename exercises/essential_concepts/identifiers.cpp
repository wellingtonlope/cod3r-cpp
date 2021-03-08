#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

int add(double x, int y)
{
    return x + y + 1000;
}

int add(int x, double y)
{
    return x + y + 2000;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    cout << add(10.0, 20) << endl;
    cout << add(10, 20.0) << endl;

    return 0;
}