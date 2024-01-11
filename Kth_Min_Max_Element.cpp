#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "ARRAY IS : ";
    int i = 0;
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void SelectionSort(int arr[], int n, int k)
{
    int i = 0, j = 0;
    int minIndex = 0;

    while (i < n - 1)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(&arr[minIndex], &arr[i]);
        }
        i++;
    }
    printArray(arr, n);

    cout << endl
         << k << " th Largest Element is : " << arr[n - k];
    cout << endl
         << k << " th Smallest Element is : " << arr[k-1];
}

int main()
{
    int n, i = 0, k;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    cout << endl
         << "Enter the kth Index of Min and Max data to be searched : ";
    cin >> k;
    Sort(arr, n, k);
}
//---------------APPROACH 2------------------
// #include <bits/stdc++.h>
// using namespace std;
  
// void kLargest(int arr[], int n, int k)
// {
//     // Sort the given array arr in reverse order.
//     sort(arr, arr + n, greater<int>());

//         cout << arr[k-1] << " ";
// }
  
// // Driver code
// int main()
// {
//     int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 1;
//     kLargest(arr, n, k);
// }