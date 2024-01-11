#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows  in Matrix : ";
    cin >> n;
    cout << "Enter the number of Columns in Matrix : ";
    cin >> m;
    int matrix[n][m];
    cout << "Enter the Elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix  thus Formed is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
       if(i%2==0){
        for(int j=0;j<m;j++)
        cout<<matrix[j][i]<<" ";
       }
       else{
        for(int j=m-1;j>=0;j--)
        cout<<matrix[j][i]<<" ";
       }
    }

}