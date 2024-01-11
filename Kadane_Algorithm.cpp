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

void kadaneAlgorithm(int arr[], int n)
{
    //*****************BRUTEFORCE METHOD NOT OPTIMISED**************
    // int sum = 0;
    // int max = sum;
    // for (int i = 0; i < n; i++)
    // {   sum=0;
    //     for (int j = i; j < n; j++)
    //     {

    //         sum+=arr[j];
    //         if(sum>max)
    //          max=sum;
    //     }
    // }
    // cout << endl
    //      << "MAXIMUM SUM OF CONTIGOUS SUBARRAY IS : " << max;
    //======================BEST SOLUTION OPTIMISED================
    int sum = 0; //it may be assigned =0 || INT_MIN
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maximum = max(maximum, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << endl
         << "MAXIMUM SUM OF CONTIGOUS SUBARRAY IS : " << maximum;
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
    kadaneAlgorithm(arr, n-1);
}