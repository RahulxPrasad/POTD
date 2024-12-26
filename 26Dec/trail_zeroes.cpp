// Your task is to calculate the number of trailing zeros in the factorial n!.
// For example, 20!=2432902008176640000 and it has 4 trailing zeros

#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    if (n < 0)
        return -1;
    int count = 0;
    for (long long i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Trailing zeroes in " << n << "! = " << trailingZeroes(n);

    return 0;
}