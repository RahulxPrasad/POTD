#include <bits/stdc++.h>
using namespace std;

int minimumMoves(string s)
{
    int i = 0, n = s.length(), count = 0;
    while (i < n)
    {
        if (s[i] == 'O')
            i++;
        else
            count++, i += 3;
    }
    return count;
}

int main()
{
    string str1 = "XXX", str2 = "XX0X", str3 = "0000";
    cout << "Minimum moves for " << str1 << "= " << minimumMoves(str1) << endl;
    cout << "Minimum moves for " << str2 << "= " << minimumMoves(str2) << endl;
    cout << "Minimum moves for " << str3 << "= " << minimumMoves(str3) << endl;

    return 0;
}