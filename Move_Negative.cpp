#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
void Move_Negative(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while (start < end)
    {
       if (arr[start]>0)
       {
            start++;
       }
       else if (arr[end]<0)
       {
        end--;
       }
       else{
        swap(arr[start],arr[end]);
       }
      
       
    }
}
int main()
{
    int n, i = 0;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    cout<< endl;
    Move_Negative(arr, n);
    printArray(arr, n);
}