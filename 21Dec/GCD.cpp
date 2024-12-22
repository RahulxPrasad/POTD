// Given two positive integers a and b, find GCD of a and b.
// Note: Don't use the inbuilt gcd function

// Example 1:
// Input:
// a = 3
// b = 6
// Output: 3
// Explanation: GCD of 3 and 6 is 3

#include <bits/stdc++.h>
using namespace std;
// RECURSIVE method to find GCD
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b);

    return 0;
}