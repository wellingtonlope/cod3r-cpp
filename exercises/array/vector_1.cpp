#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    nums[0] = 0;

    for (int n : nums)
    {
        cout << n << " ";
    }

    cout << endl;

    // cbegin, rbegin and crbegin the same thing to end 
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        *i += 100;
        cout << *i << " ";
    }

    return 0;
}