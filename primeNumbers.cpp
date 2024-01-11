// by sieve method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number to Check if it is a Prime Number or Not : ";
    cin >> n;
    vector<bool> prime(n, true);

    prime[0]= prime[1] = false;

    for (int i = 2; i < n; ++i)
    {
        if (prime[i] == true)
            for (int j = 2 * i; j < n; j += i)
            {
                prime[j] = false;
            }
    }
    for (int i = 0; i < n; i++)
    {
        // if (prime[i])
        //     cout << i + 1 << " -> "
        //          << "prime" << endl;
        // else
        //     cout << i + 1 << " -> "
        //          << "Not Prime" << endl;
        cout<<prime[i]<<endl;
    }
}