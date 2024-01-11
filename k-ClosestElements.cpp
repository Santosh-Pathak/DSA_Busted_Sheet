#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr, int n)
{
    int i = 0;
    cout << endl
         << "ARRAY THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
}
// APPROACH 1 0(N)
// void K_Closest(vector<int> v, int k, int x)
// {
//     int i = 0;
//     int j = v.size() - 1;
//     while (j - i > k)
//     {

//         if (x - v[i] > v[j] - x)
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }
//     cout << endl
//          << "Closest elements of " << x << " are : ";
//     cout << endl;
//     for (int k = i; k < j; k++)
//     {
//         cout << v[k] << " ";
//     }
// }
// APPROACH 2 0(logN)
void K_Closest(vector<int> v, int k, int x)
{
    for (int i = 0; i < v.size(); i++)
    {
        
    }
    cout << endl
         << "Closest elements of " << x << " are : ";
    cout << endl;
    for (int k = i; k < j; k++)
    {
        cout << v[k] << " ";
    }
}
int main()
{
    int n, i = 0, num, k, x;
    cout << "Enter the number of Elements in Array  : ";
    cin >> n;
    vector<int> arr1;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr1.push_back(num);
        i++;
    }
    cout << endl
         << " Enter  the No. of Elements k = ";
    cin >> k;
    cout << endl
         << " Enter  the Element to find out Closest = ";
    cin >> x;
    printArray(arr1, arr1.size());
    K_Closest(arr1, k, x);
}