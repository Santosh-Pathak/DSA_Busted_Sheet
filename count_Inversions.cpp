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
//************USING NESTED FOR LOOPS TIME COMPLEXIVITY = N^2

// int CountInversion(int arr[], int n)
// {   int count=0;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] >= arr[j])
//             {
//                 count++;
//                 cout << endl << arr[i] << "," << arr[j];
//             }
//         }
//     }
//     return count;
// }
//************USING MERGE SORT TECHNIQUE TIME COMPLEXIVITY = N*LOG N
// int merge(int arr[], int s, int mid, int e)
// {
//     int count = 0;
//     int k = s;
//     int l1 = mid - s + 1;
//     int l2 = e - mid;
//     int first[l1];
//     int second[l2];
//     for (int i = 0; i < l1; i++)
//     {
//         first[i] = arr[k];
//     }
//     k = mid + 1;
//     for (int j = 0; j < l2; j++)
//     {
//         second[j] = arr[k];
//     }
//     // merge
//     int index1 = 0;
//     int index2 = 0;
//     k = s;
//     while (index1 < l1 && index2 < l2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
// arr[k] = second[index2];
// count+=l1-1;
// k++;
// index2++;
//         }
//     }
//     while (index1 < l1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < l2)
//     {
//         arr[k++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;

//     return count;
// }
int mergeArray(int arr[], int s, int mid, int e)
{
    int count = 0;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *first = new int[l1];
    int *second = new int[l2];

    // copy values
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[k++];
    }
    // merge
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < l1 && index2 < l2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k] = second[index2];
            count += l1 - index1; // first[index1],first[index1+1],first[index1+2]>second[index2] ==> l1-index1;
            k++;
            index2++;
        }
    }
    while (index1 < l1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < l2)
    {
        arr[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
    return count;
}
int CountInversion(int arr[], int s, int e)
{
    long long count = 0;
    if (s < e)
    {
        int mid = (s + e) / 2;
        count += CountInversion(arr, s, mid);
        count += CountInversion(arr, mid + 1, e);
        count += mergeArray(arr, s, mid, e);
    }
    return count;
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
    int c = CountInversion(arr, 0, n - 1);
    cout << endl
         << "Total NUmbers Of Inversions Are : " << c;
}