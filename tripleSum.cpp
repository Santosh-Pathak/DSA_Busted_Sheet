#include <bits/stdc++.h>
using namespace std;
void find3Numbers(int A[], int n, int X)
{
    int count = 0;
    sort(A, A + n);
    for (int i = 0; i < n-2; i++)
    {
        int j = i+1;
        int k = n - 1;
        while (j < k)
        {
            if ((A[i] + A[j] + A[k]) == X)
                count++;
            else if ((A[i] + A[j] + A[k]) < X)
            {
                j++;
            }
            else
            {
                k--;
            }
        }

    }
    if (count != 0)
        cout << "Found !!";
    else
        cout <<" not Found!!";
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
    cout << "Enter a Element to Search the sum  : ";
    cin >> k;
    find3Numbers(arr, n, k);
}