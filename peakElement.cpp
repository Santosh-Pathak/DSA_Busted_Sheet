//  WE CAN DO THIS QUESTION ON 0(N) BY SIMPLE LINEAR SEARCH
// BUT
// WE WILL DO IT BY BINARY SEACRCH IN 0(LOG n)
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    cout << endl
         << "Array thus Modified is : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
int findPeak(int arr[], int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return arr[mid];
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int main()
{
    int n, i = 0;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    cout << endl;
    int ans = findPeak(arr, n);
    cout << ans;
}