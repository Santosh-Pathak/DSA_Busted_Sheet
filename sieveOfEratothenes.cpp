#include <bits/stdc++.h>
using namespace std;
vector<bool> sieveOfE(int n)
{
    vector<bool>sieve(n,true);
    sieve[0] =sieve[1] =false;
    for (int i = 2; i*i < n; i++) // for (int i = 2; i < n; i++) OPTIMIZATION 2nd
    {
        if(sieve[i])
        {
            int j=i*i; // j=2*i *OPTIMIZATION 1st
            while (j<n)
            {
                sieve[j] =false;
                j+=i;
            }
            
        }
    }
    return sieve;
    
}
int main()
{
    int n;
    cout<<"Enter N up to which you have to find prime number :  ";
    cin>>n;
    vector<bool>sieve = sieveOfE(n);
    for(int i=0;i<n;i++)
    {
        if(sieve[i]==true)
        cout<<i<<" ";
    }

}