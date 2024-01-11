// RAT IN A MAZE PROBLEM
#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int i, int j, int row, int col, int arr[][4], vector<vector<bool>> visited)
{
    if (((i>=0 && i<row) && (j>=0 && j<col)) 
                && (visited[i][j] == false) 
                && (arr[i][j] == 1))
        return true;
    else
        return false;
}
void solveMaze(int arr[4][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string ans)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        path.push_back(ans);
        return;
    }

    // down = i+1,j
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(arr, row, col, i + 1, j, visited, path, ans + 'D');
        visited[i + 1][j] = false;
    }
    // left = i,j-1
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(arr, row, col, i, j - 1, visited, path, ans + 'L');
        visited[i][j - 1] = false;
    }
    // right = i,j+1
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(arr, row, col, i, j + 1, visited, path, ans + 'R');
        visited[i][j + 1] = false;
    }
    // up = i-1,j
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solveMaze(arr, row, col, i - 1, j, visited, path, ans + 'U');
        visited[i - 1][j] = false;
    }
}
int main()
{
    int maze[4][4] = {
        {1, 0, 0,0},
        {1, 1, 0,1},
        {1, 1, 0,0},
        {0,1,1,1}};

    int row = 4;
    int col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // source li value ko true mark krdo
    visited[0][0] = true;
    vector<string> path;
    string ans = "";

    solveMaze(maze, row, col, 0, 0, visited, path, ans);
    cout<<"Printing Soltions are : ";
    for(auto x : path)
    {
        cout<<x<<" ";
    }
}