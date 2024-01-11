
#include <bits/stdc++.h>
using namespace std;
void findPermutations(vector<string> &permut, string &a, int l, int r)
{
    if (l == r)
    {
        permut.push_back(a);
    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            findPermutations(permut,a, l + 1, r);

            // backtrack
            swap(a[l], a[i]);
        }
    }
}
// Driver Code
int main()
{
    string s1 = "ABC";
    vector<string> permut;
    int n = s1.size();
    findPermutations(permut, s1, 0, n);
    for (int i = 0; i <permut.size(); i++)
    {
        cout<<permut[i]<<" ";
    }
    
}

