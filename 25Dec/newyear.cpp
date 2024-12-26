#include <bits/stdc++.h>
using namespace std;

int numberOfProblems(int n, int k)
{
    int giventime = 240 - k;
    int ans = 0;
    int i = 0;
    // cout << "given time = " << giventime << endl;

    while (giventime >= i && ans < n)
    {
        i += 5;
        // cout << "i = " << i << endl;
        giventime -= i;
        // cout << "given time = " << giventime << endl;
        if (giventime < 0)
            break;
        ans++;
    }
    return ans;
}

int main()
{
    // cout << "Enter the number of problems: ";
    int n;
    cin >> n;
    // cout << "Enter the no of minutes needed to travel: ";
    int k;
    cin >> k;
    // cout << "Total problems that can be solved: ";
    cout << numberOfProblems(n, k);

    return 0;
}