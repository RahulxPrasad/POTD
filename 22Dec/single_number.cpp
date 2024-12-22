// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    // bool flag;
    // for (int i = 0; i < nums.size(); i++) {
    //     flag = true;
    //     for (int j = 0; j < nums.size(); j++) {
    //         if (nums[i] == nums[j] && i != j)
    //             flag = false;
    //     }
    //     if (flag)
    //         return nums[i];
    // }

    // optimal approach
    sort(nums.begin(), nums.end());

    if (nums.size() == 1)
        return nums[0];

    if (nums[nums.size() - 1] != nums[nums.size() - 2])
        return nums[nums.size() - 1];
    for (int i = 0; i < nums.size() - 1; i = i + 2)
    {
        if (nums[i] != nums[i + 1])
            return nums[i];
    }

    return -1;
}

int main()
{
    vector<int> arr1 = {4, 1, 2, 1, 2};
    vector<int> arr2 = {2, 2, 1};
    vector<int> arr3 = {1};
    cout << "single number: " << singleNumber(arr1) << endl;
    cout << "single number: " << singleNumber(arr2) << endl;
    cout << "single number: " << singleNumber(arr3) << endl;

    return 0;
}