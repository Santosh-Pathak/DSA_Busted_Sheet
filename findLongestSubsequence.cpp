#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr)
{
    int n = arr.size();
    int i = 0;
    cout << endl
         << "ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
vector<int> longestSubsequence(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    int n, i = 0, num;
    cout << "Enter the number of Elements in Array  : ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr.push_back(num);
        i++;
    }

    printArray(arr);
    vector<int> ans = longestSubsequence(arr);
    printArray(ans);
}
