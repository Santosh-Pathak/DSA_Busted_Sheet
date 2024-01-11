#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void subs(int n, vector<int> &subset)
{
    if (n == 0)
    {
        ans.push_back(subset);
        return;
    }
    // add hoga
    subset.push_back(n);
    subs(n - 1, subset);
    // add nhi hoga
    subset.pop_back();
    subs(n - 1, subset);
}

int main()
{   vector<int>nums={1,2,3,4};
    int n = nums.size();
    cout<<n;
    subs(n, nums);
    // for(int i=0;i<ans[i].size();i++)
    // {
    //     for(int j=0;j<ans[j].size();j++)
    //     {
    //         cout<<nums[i][j]<<" ";
    //     }
    // }
}