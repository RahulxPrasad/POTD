#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    int count;
    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
    {
        count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                if (nums[i] > nums[j])
                    count++;
            }
        }
        arr.push_back(count);
    }
    return arr;
}

int main()
{
    vector<int> v1 = {8, 1, 2, 2, 3};
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> v2 = smallerNumbersThanCurrent(v1);

    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> arr1 = {7, 7, 7, 7};
    for (auto it : arr1)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> arr2 = smallerNumbersThanCurrent(arr1);

    for (auto it : arr2)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}