#include<bits/stdc++.h>
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

int main()
{
    int n, i = 0, num;
    cout << "Enter the number of Elements in Array  : ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr.push_back(num);
        i++;
    }

    printArray(arr, n);

    int end = arr.size() - 1;
    i=0;
    num=0;
    while (i <= end)
    {
        num = num ^ arr[i]; 
        i++;
    }

    cout<<endl<<"Unique Element is  : "<<num;
}
