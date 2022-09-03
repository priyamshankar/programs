//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the number of islands.
    // Code here

    bool isSafe(vector<vector<char>> &grid, int row, int column)
    {
        int rows = grid.size();
        int columns = grid[0].size();
        if (row >= 0 && column >= 0 && row < rows && column < columns && grid[row][column] == '1')
            return true;
        return false;
    }

    void dfs(vector<vector<char>> &grid, int rows, int columns, vector<vector<bool>> &visited)
    {

        visited[rows][columns] = true;

        int gRow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int gColumn[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < 8; i++)
        {
            if (isSafe(grid, gRow[i] + rows, gColumn[i] + columns) && !visited[rows + gRow[i]][gColumn[i] + columns])
            {
                // cout<<5<<endl;
                dfs(grid, gRow[i] + rows, gColumn[i] + columns, visited);
            }
        }
        // return;
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int rows = grid.size();
        int columns = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(columns, 0));

        int islands = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (!visited[i][j] && grid[i][j] == '1')
                {
                    dfs(grid, i, j, visited);
                    islands++;
                }
            }
        }
        return islands;
    }
};

//{ Driver Code Starts.
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '#'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    Solution obj;
    int ans = obj.numIslands(grid);
    cout << ans << '\n';

    return 0;
}
// } Driver Code Ends