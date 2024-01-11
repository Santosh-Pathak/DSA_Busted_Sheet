#include<iostream>
using namespace std;
void rearrange(int arr[], int n)
{
  
    
}

int main()
{
    int n, i = 0;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    while (i < n)
    {
        cin >> arr[i++];
    }
    i = 0;
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
    cout << endl;
    rearrange(arr, n);
    i = 0;
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}