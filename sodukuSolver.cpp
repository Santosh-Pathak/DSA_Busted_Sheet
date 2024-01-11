#include <iostream>
using namespace std;
bool isSafe(int value, int board[9][9], int i, int j)
{   cout<<"call"<<endl;
    int n=9;
    //  row Check
    for (int row = 0; row < n; row++)
    {
        if (board[row][j] == value)
        {
            return false;
        }
    }

    // column check
    for (int col = 0; col < n; col++)
    {
        if (board[i][col] == value)
        {
            return false;
        }
    }
    
    // 3*3 box Check
     for (int k = 0; k < n; k++)
    {
        if (board[3*(i/3)+(k/3)][3*(j/3)+(i%3)] == value)
        {
            return false;
        }
    }
    // safe h
    return true;
}
// this function found true/ false
bool solve(int board[9][9], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check for Empty Cell
            if (board[i][j] == 0)
            {
                for (int value = 1; value <= 9; value++)
                {
                    if (isSafe(value, board, i, j))
                    {
                        board[i][j] = value;
                        // Baki Recursion Sambhal Lega
                        bool AggeKaSolution = solve(board, n);
                        if (AggeKaSolution == true)
                        {
                            return true;
                        }
                        // Backtracking
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
// return true;
}
int main()
{ // 0=>Empty Cell
    int arr[9][9] = {
        {4, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 2, 3, 7, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 8},
        {0, 0, 0, 9, 5, 0, 0, 0, 0},
        {0, 8, 6, 0, 0, 0, 2, 0, 0},
        {0, 2, 0, 6, 0, 0, 7, 5, 0},
        {0, 0, 0, 0, 0, 0, 4, 7, 6},
        {0, 7, 0, 0, 4, 5, 0, 0, 0},
        {0, 0, 8, 0, 0, 9, 0, 0, 0}
    };
     int n = 9;
    if(solve(arr, n))
    cout<<"done";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}