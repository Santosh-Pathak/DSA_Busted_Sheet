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
//BRUTE FORCE METHOD
void findAllPairs(int arr[], int n, int k)
{   int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]+arr[j]==k)
            sum++;
        }
    }
    cout<<"counts are : "<<sum/2;
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
    printArray(arr, n);
    cout << "Enter the Value : ";
    cin >> k;
    findAllPairs(arr, n,k);
}