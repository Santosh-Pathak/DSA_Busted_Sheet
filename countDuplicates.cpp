#include <iostream>
using namespace std;
int countDuplicate(int arr[], int s, int e, int k, bool b)
{
    int ans ;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            if (b)
                e = mid - 1;
            else
                s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    cout << "Enter a Element to Search the Duplictes : ";
    cin >> k;
    int firstIndex = countDuplicate(arr, 0, n - 1, k, true);
    int LastIndex = countDuplicate(arr, 0, n - 1, k, false);
    cout << k << " is present " << firstIndex -LastIndex + 1<< " times ";
}