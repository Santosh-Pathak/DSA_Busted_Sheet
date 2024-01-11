#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    cout<<"ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
int FindDuplicatesInArray(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        int index= abs(arr[i]);
        if(arr[index]<0)
        return index;

        arr[index] = - arr[index];
    }
return -1;
}
int main()
{
    int n, i = 0;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    cout<<"Enter the Elements : ";
    while (i < n)
    {
        cin >> arr[i++];
    }
    
     printArray(arr,n);
    cout<<endl<< "Duplicates Elements  are :"<< FindDuplicatesInArray(arr,n);
}