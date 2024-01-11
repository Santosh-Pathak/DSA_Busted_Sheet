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
int CountJump(int arr[], int n)
{
    if (n == 1)
        return 0;
    else if (arr[0] == 0)
    {
        return -1;
    }

    else
    {
        int jump = 0;
        int pos = 0;
        int des = 0;
        for (int i = 0; i < n - 1; i++)
        {
            des = max(des, arr[i]);
            if (pos == i)
            {
                pos = des;
                jump++;
            }
        }
        return jump;
    }
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
    cout << endl
         << "NUMBER OF JUMPS ARE : " << CountJump(arr, n - 1);
}