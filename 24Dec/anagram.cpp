#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of string: ";
    cin >> n;
    string str;
    cout<<"Enter the string: ";
    cin >> str;

    set<char> result;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
        result.insert(str[i]);
    }
    if (result.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}