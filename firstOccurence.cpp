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
int firstOccurence(int arr[], int s, int e, int k)
{
    int ans;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int s, int e, int k)
{
    int ans;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
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
    int k;
    cout << "Enter the Number to be Searched : ";
    cin >> k;
    printArray(arr, n);
    cout << endl;
    int first = firstOccurence(arr, 0, n, k);
    int last = lastOccurence(arr, 0, n, k);
    cout << " First Occurence is : " << first << endl;
    cout << " Last Occurence is : " << last << endl;
    cout << "Total Number of Occcurence is  : " << last - first + 1;
}