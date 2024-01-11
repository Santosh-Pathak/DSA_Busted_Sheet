#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    cout << "ARRAY OF STOCKS THUS FORMED IS : ";
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
    cout << endl;
}
//******************APPROACH NO-1 (BRUTEFORCE METHOD)(BIG0(N2))
// int  BestTimeToBuySellStocks(int arr[], int n)
// {
//     int min=arr[0];
//     int min_index=0;
//     for(int i=0;i<n;i++)
//     {
// if(arr[i]<min)
// {
//     min=arr[i];
//     min_index=i;
// }
//     }

//     int max=0;
//     for(int i=min_index;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     return (max-min);
// }
//******************APPROACH NUMBER -2 (BEST TIME COMPLEXIVITY)(O(N))
int BestTimeToBuySellStocks(int arr[], int n)
{
    int minimum = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - minimum;
        profit = max(profit, diff);
        minimum = min(minimum, arr[i]);
    }
    return profit;
}
//************
int main()
{
    int n, i = 0;
    cout << "Enter the number of Stocks : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Prices of Stocks : ";
    while (i < n)
    {
        cin >> arr[i++];
    }
    printArray(arr, n);
    cout << endl
         << "MAXIMUM PROFIT IS : " << BestTimeToBuySellStocks(arr, n - 1);
}