#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();

    int x = 0;
    vector<int> arr;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < n / 2 + n % 2; j++)
        {

            if (nums[j] == i)
            {
                arr.push_back(i);
                x++;
            }
            if (j == n - 1 - j)
                continue;
            if (nums[n - 1 - j] == i)
            {
                arr.push_back(i);
                x++;
            }
        }
    }

    nums = arr;
}

int main()
{
    vector<int> v1 = {2, 0, 2, 1, 1, 0};
    vector<int> v2 = {2, 0, 1};

    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    sortColors(v1);
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;
    sortColors(v2);
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}