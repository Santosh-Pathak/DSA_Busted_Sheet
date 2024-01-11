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

void RotateArray(int arr[], int n)
{

    int temp=arr[n];
    for(int i=n;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
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
    RotateArray(arr, n - 1);
    printArray(arr, n);
}