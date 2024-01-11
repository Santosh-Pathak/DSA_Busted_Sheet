#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i++] << " ";
    }
    cout << endl;
}

void Union(int arr1[], int n, int arr2[], int m)
{
    vector<int> un;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            if (un[(un.size() - 1)] != arr1[i] && (un.size() > 0))
                un.push_back(arr1[i]);
                
            else if ((un.size() == 0))
            {
                un.push_back(arr1[i]);
            }

            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            if (un[(un.size() - 1)] != arr1[i] && (un.size() > 0))
                un.push_back(arr2[i]);
            else if ((un.size() == 0))
            {
                un.push_back(arr1[i]);
            }
            i++;
        }

        else
        {
            if (un[(un.size() - 1)] != arr1[j] && (un.size() > 0))
                un.push_back(arr2[j]);
            else if ((un.size() == 0))
            {
                un.push_back(arr1[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        un.push_back(arr2[i++]);
    }
    while (j < m)
    {
        un.push_back(arr2[j++]);
    }

    cout << endl;
    cout << "Union  of Arrays is : ";
    for (int i = 0; i < (un.size()); i++)
    {
        cout << un[i] << " ";
    }
}
void Intersection(int arr1[], int n, int arr2[], int m)
{
    vector<int> in;
    int i = 0, j = 0;
    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            in.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << endl;
    cout << "Intersection of Arrays is : ";
    for (int i = 0; i < (in.size()); i++)
    {
        cout << in[i] << " ";
    }
}
int main()
{
    int n, m, i = 0;
    cout << "Enter the number of Elements in Array 1 : ";
    cin >> n;
    int arr1[n];
    cout << "Enter Elements in Sorted Order : ";
    while (i < n)
    {
        cin >> arr1[i++];
    }
    i = 0;
    cout << "Enter the number of Elements in Array 2 : ";
    cin >> m;
    int arr2[m];
    cout << "Enter Elements in Sorted Order : ";

    while (i < m)
    {
        cin >> arr2[i++];
    }
    cout << "Array 1 : ";
    printArray(arr1, n);
    cout << "Array 2 : ";
    printArray(arr2, m);
    Union(arr1, n, arr2, m);
    Intersection(arr1, n, arr2, m);
}