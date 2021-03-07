// PI = 3.1415
// PI * radius * radius

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592;
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "Area is " << area << endl;

    return 0;
}