#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    if (s.size() == 0)
        return 0;
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());

    int maxNum = 0;
    int cookieIndex = s.size() - 1;
    int childIndex = g.size() - 1;
    while (cookieIndex >= 0 && childIndex >= 0)
    {
        if (s[cookieIndex] >= g[childIndex])
        {
            maxNum++;
            cookieIndex--;
            childIndex--;
        }
        else
        {
            childIndex--;
        }
    }
    return maxNum;
}

int main()
{
    vector<int> child = {1, 2, 3};
    vector<int> cookies = {1, 1};
    cout << "max number of content: " << findContentChildren(child, cookies);

    return 0;
}