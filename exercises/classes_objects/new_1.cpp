#include <iostream>
using namespace std;

int main()
{
    int x = 5; // stack

    // new ==> malloc() + constructor
    int *y = new int(10); // heap 4 bytes
    cout << x * *y << endl;
    delete y; // delete ==> free() + destructor

    int* w =  new int[100]; // 4 bytes * 100 = 400 bytes
    w[49] = 123;
    cout << w[49] << endl;
    delete[] w;

    return 0;
}