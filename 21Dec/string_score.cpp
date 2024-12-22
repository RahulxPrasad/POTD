// You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
// Return the score of s.

// Example 1:
// Input: s = "hello"
// Output: 13
// Explanation:
// The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

#include <bits/stdc++.h>
using namespace std;

int scoreOfString(string s)
{
    int data = 0, sum = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        data = s[i + 1] - s[i];
        if (data < 0)
            data = data * (-1);
        sum += data;
    }
    return sum;
}

int main()
{
    cout << "Enter your string: ";
    string str;
    cin >> str;
    cout << "Score of string: " << scoreOfString(str) << endl;

    return 0;
}



// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends

// class Solution {
//   public:
//     int gcd(int a, int b) {

//     if (a == 0) return b;
//     if (b == 0) return a;
//     if (a == b) return a;
//     if (a > b) return gcd(a - b, b);
//     return gcd(a, b - a);
//     }
// };


// //{ Driver Code Starts.

// int main(){
//     int t;
//     scanf("%d ",&t);
//     while(t--){
        
//         int a;
//         scanf("%d",&a);
        
        
//         int b;
//         scanf("%d",&b);
        
//         Solution obj;
//         int res = obj.gcd(a, b);
        
//         cout<<res<<endl;
        
    
// cout << "~" << "\n";
// }
// }

// // } Driver Code Ends