#include <iostream>
#include <vector>
using namespace std;

using mapfn = int(*)(int);

vector<int> map(vector<int> v, mapfn fn)
{
    vector<int> newVector;
    for (auto el : v)
    {
        newVector.push_back((*fn)(el));
    }
    return newVector;
}

int main()
{
    auto square = [](int x) { return x * x; };
    auto triple = [](int x) { return x * 3; };

    vector<int> nums = {2, 5, 8, 23, 56};
    vector<int> squares = map(nums, square);
    vector<int> triples = map(nums, triple);

    for (auto num : nums)
        cout << num << "\t";
    cout << "\n";
    for (auto sq : squares)
        cout << sq << "\t";
    cout << "\n";
    for (auto t : triples)
        cout << t << "\t";

    return 0;
}