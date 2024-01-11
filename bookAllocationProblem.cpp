#include <bits/stdc++.h>
using namespace std;
bool ispossibleSolution(int a[], int n, int m, int sol)
{
    int pagesum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sol)
        {
            return false;
        }
        if (pagesum + a[i] > sol)
        {
            count++; // increase the count of student to allocate the next remaining pages
            pagesum = a[i];
            if (count > m) // if no. of count is greater than students given
            {
                return false; // condition isi false
            }
        }
        else
        {
            pagesum += a[i];
        }
    }
    return true;
}
int main()
{
    int n, m;
    int a[n];
    cout << "Enter the Number of Books : ";
    cin >> n;
    cout << " Enter the Number of Students : ";
    cin >> m;
    cout << "Enter the Number of Pages per Book : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Code to find the minimum number of pages
    if (m > n)
    { // if number of students is greater than number of books
        cout << "Number of Students are Expected less than Number of Books!!!!!!!!!";
        return 0;
    }
    int s = 0;
    int end = accumulate(a, a + n, 0); // sum of all pages of array of books
    int ans = -1;
    while (s <= end)
    {
        int mid = (s + end) / 2;
        if (ispossibleSolution(a, n, m, mid))
        {
            ans = mid;
            end = mid - 1; // if conditiom satisfies the situation
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "Minimum Numbers of Pages to be Allocated is " << ans;
}
