#include <bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string> &bank)
{
    int n, total = 0, prevbeams = 0;

    for (int i = 0; i < bank.size(); i++)
    {
        n = 0;
        for (auto it : bank[i])
        {
            if (it == '1')
                n++;
        }
        if (n > 0)
        {
            total += (prevbeams * n);
            prevbeams = n;
        }
    }
    return total;
}

int main()
{
    vector<string> arr = {"011001", "000000", "010100", "001000"}; // ans = 8
    cout << "Total beams: " << numberOfBeams(arr);

    return 0;
}