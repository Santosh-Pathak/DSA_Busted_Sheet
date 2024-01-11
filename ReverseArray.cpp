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
// USING ITERATIVE METHOD
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
    cout<<"ITERATIVELY REVERSED ARRAY : ";
    printArray(arr, n);
}
//USING RECURSION
void reverseArray(int arr[],int start,int end)
{   
    if(start>=end)
    return;

    swap(arr[start],arr[end]);
    reverseArray(arr,start+1,end-1);
    
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
     reverseArray(arr, n);
     cout<<endl;
     cout<<"RECURSIVELY REVERSED ARRAY : ";
     reverseArray(arr,0, n-1);
     printArray(arr, n);
     
}