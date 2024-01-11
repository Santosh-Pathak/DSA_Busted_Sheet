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
vector<int> ans;
void mergeArray(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0;
    int j = 0;
    int n = nums1.size();
    int m = nums2.size();
    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            ans.push_back(nums1[i++]);
        }
        else
        {
            ans.push_back(nums2[j++]);
        }
    }
    while (i < n)
    {
        ans.push_back(nums1[i++]);
    }
    while (j < m)
    {
        ans.push_back(nums2[j++]);
    }
}
int main()
{
    int n, i = 0, num;
    cout << "Enter the number of Elements in Array 1 : ";
    cin >> n;
    vector<int> arr1;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr1.push_back(num);
        i++;
    }

    i = 0;
    cout << "Enter the number of Elements in Array 2 : ";
    cin >> n;
    vector<int> arr2;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr2.push_back(num);
        i++;
    }
    printArray(arr1, arr1.size());
    printArray(arr2, arr2.size());
    printArray(ans, ans.size());

    mergeArray(arr1, arr2);
    n = ans.size();
    if (n % 2 == 0)
    {
        int mid = n / 2;
        double sol = ans[mid - 1] + ans[mid];
        sol = sol / 2;
        cout << endl
             << "Median is " << sol;
    }
    else
        cout << endl
             << "median is " << ans[n / 2];
}