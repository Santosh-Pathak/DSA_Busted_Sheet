#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr, int n)
{
    int i = 0;
    cout << endl
         << "ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
// BTUTE FORCE METHOD 0(N2) *returning duplicate answer / repeating answer
// int findPairs(vector<int> v, int k)
// {
//     int count = 0;
//     int n = v.size();
//     set<pair<int, int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//                 continue;
//             int diff = abs(v[i] - v[j]);
//             if (diff == k)
//             {
//                 ans.insert({v[i], v[j]});
//             }
//         }
//     }
//     return ans.size();
// }
// OPTIMISED APPROACH 0(NlogN)
int findPairs(vector<int> v, int k)
{
 
    sort(v.begin(), v.end());
    int i = 0, j = 0;
  set<pair<int, int>> ans;
    while (j < v.size())
    {
        int diff = abs(v[i] - v[j]);
        if (diff == k)
        {    ans.insert({v[i], v[j]});
            
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j) // condition acccording to the question
            j++;
    }
    return ans.size();
}

int main()
{
    int n, i = 0, num, k;
    cout << "Enter the number of Elements in Array  : ";
    cin >> n;
    vector<int> arr1;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr1.push_back(num);
        i++;
    }
    cout << endl
         << " Enter  the value of Differnce k = ";
    cin >> k;
    printArray(arr1, arr1.size());
    int ans = findPairs(arr1, k);
    cout << endl
         << ans << " no. of k-diff pairs are present in Given Array.";
    return 0;
}