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
//*******BRUTEFORCE APPROCAH **************
// void Sort_WithOut_Sorting(int arr[], int n)
// {
//     int zero = 0, one = 0, two = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 2)
//         {
//             two++;
//         }
//     }
//     int i = 0;
//     while (zero--)
//     {
//         arr[i++] = 0;
//     }
 
//     while ( one--)
//     {
//         arr[i++] = 1;
//     }
//     while (two--)
//     {
//         arr[i++] = 2;
//     }
//     cout<<endl;
// }
//******* OPTIMIZED APPROACH ************** 3 POINTER APPROACH
void Sort_WithOut_Sorting(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n;
    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }
}

int main()
{
    int n, i = 0;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int arr[n];
    cout << " Enter Only 0 , 1, & 2 : " << endl;
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    Sort_WithOut_Sorting(arr, n );
    cout << endl;
    printArray(arr, n);
}