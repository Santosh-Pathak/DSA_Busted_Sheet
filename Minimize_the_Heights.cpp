#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    cout << "ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}

void minimizeTheHeight(int arr[], int n, int k)
{
    int max = arr[0], min =  INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - k) <= 0)
        {
            arr[i] += k;
        }
        else
        {
            arr[i] -= k;
        }

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printArray(arr, n);
    cout << " max : " << max;
    cout << " min : " << min;

    cout << endl
         << "MINIMIZED HEIGHT : " << max - min;
}
int main()
{
    int n, i = 0, k;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    cout << "Enter Balancing Factor (i.e. +ve k ) : ";
    cin >> k;
    
    minimizeTheHeight(arr, n, k);
}