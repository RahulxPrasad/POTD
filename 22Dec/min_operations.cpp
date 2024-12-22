// You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.
// Return the minimum number of operations to make all elements of nums divisible by 3.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: 3

#include <bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 3 != 0)
            count++;
    }
    return count;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 6, 9};
    cout << "minimum operations: " << minimumOperations(arr1) << endl;
    cout << "minimum operations: " << minimumOperations(arr2) << endl;

    return 0;
}