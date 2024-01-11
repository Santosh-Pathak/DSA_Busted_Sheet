#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    cout << endl;
    int i = 0;
    cout << "ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
//APPROACH 1ST 
void merge_sorted_array(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
            sort(arr2, arr2 + m);
        }
    }
}
//APPROACH 1ST 

int main()
{
    int n, i = 0, m;
    cout << "Enter the number of Elements in First Sorted Array : ";
    cin >> n;
    int arr1[n];
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> arr1[i++];
    }
    cout << endl
         << "Enter the number of Elements in second Aray : ";
    cin >> m;
    i = 0;
    int arr2[m];
    cout << "Enter the Elements : ";
    while (i < m)
    {
        cin >> arr2[i++];
    }
    printArray(arr1, n);
    printArray(arr2, m);
    merge_sorted_array(arr1, arr2, n, m);
    cout << endl
         << "ARRAYS AFTER MERGE SORTING AT CONSTANT SPACE COMPLEXIVITY : " << endl;
    printArray(arr1, n);
    printArray(arr2, m);
}