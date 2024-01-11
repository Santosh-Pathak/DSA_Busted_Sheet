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
// USING ITERATION
void Max_Min_In_Array(int arr[], int n)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    cout << endl
         << "MAXIMUM DATA IS : " << largest;
    cout << endl
         << "MINIMUN DATA IS : " << smallest << endl;
}
// USING RECURSION
struct min_max
{
    int smallest;
    int largest;
};

struct min_max
Max_Min_In_Array(int arr[], int start, int end)
{

    struct min_max temp, temp1, temp2;
    if (start == end)
    {
        temp.largest = arr[start];
        temp.smallest = arr[end];
        return temp;
    }
    if (end == (start + 1))
    {
        if (arr[start] > arr[end])
        {
            temp.largest = arr[start];
            temp.smallest = arr[end];
            return temp;
        }
        else
        {
            temp.largest = arr[end];
            temp.smallest = arr[start];
            return temp;
        }
    }

    int mid = (start + end) / 2;
    temp1 = Max_Min_In_Array(arr, start, mid);
    temp2 = Max_Min_In_Array(arr, mid + 1, end);

    if (temp1.largest > temp2.largest)
        temp.largest = temp1.largest;
    else
        temp.largest = temp2.largest;

    if (temp1.smallest < temp2.smallest)
        temp.smallest = temp1.smallest;
    else
        temp.smallest = temp2.smallest;

        return temp;
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
    Max_Min_In_Array(arr, n);
     cout << endl
         << "MAXIMUM DATA IS : " << Max_Min_In_Array(arr,0,n-1).largest;
    cout << endl
         << "MINIMUN DATA IS : " << Max_Min_In_Array(arr,0,n-1).smallest << endl;
}