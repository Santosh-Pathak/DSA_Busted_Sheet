#include <bits/stdc++.h>
#include <vector>
using namespace std;
// vector<int> findFactorial(int n)
// {
//     vector<int> ans;
//     ans.push_back(1);
//     for (int i = 2; i <= n; i++)
//     {
//         int carry = 0;
//         for (int j = 0; j < ans.size(); j++)
//         {
//             int val = ans[j] * i + carry;
//             ans[j] = val % 10;
//             carry = val / 10;
//         }
//         while (carry != 0)
//         {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

int main()
{
    int n;
    cout << "Enter a number to find factorial : ";
    cin >> n;
    vector<int> ans = findFactorial(n);
    int i = 0;
    cout
        << "Factorial of " << n << " is = ";
    while (i < ans.size())
    {
        cout << ans[i++];
    }
}