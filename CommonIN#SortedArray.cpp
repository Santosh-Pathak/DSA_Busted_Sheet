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
vector<int> commonElements(vector<int> A, vector<int> B, vector<int> C, int n1, int n2, int n3)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        while (A[i] == A[i + 1])
        {
            i++;
        }
        if (A[i] == B[j] && B[j] == C[k])
        {
            ans.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
            i++;
        else if (B[j] < C[k])
            j++;
        else
            k++;
    }
    return ans;
}
int main()
{
    int n, i = 0, num;
    cout << "Enter the number of Elements in Array 1 : ";
    cin >> n;
    vector<int> arr1;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr1.push_back(num);
        i++;
    }

    i = 0;
    cout << "Enter the number of Elements in Array 2 : ";
    cin >> n;
    vector<int> arr2;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr2.push_back(num);
        i++;
    }
    i = 0;
    cout << "Enter the number of Elements in Array 3 : ";
    cin >> n;
    vector<int> arr3;
    cout << "Enter the Elements : ";
    while (i < n)
    {
        cin >> num;
        arr3.push_back(num);
        i++;
    }
    i = 0;

    printArray(arr1, arr1.size());
    printArray(arr2, arr2.size());
    printArray(arr3, arr3.size());
    vector<int> ans = commonElements(arr1, arr2, arr3, arr1.size(), arr2.size(), arr3.size());
    i = 0;
    n = ans.size();
    cout << endl
         << "COMMON ELEMENTS ARE : ";
    while (i < n)
    {
        cout << ans[i++] << " ";
    }
}