// Consider a rat placed at position (0, 0) in an n x n square matrix mat[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

// The matrix contains only two possible values:

// 0: A blocked cell through which the rat cannot travel.
// 1: A free cell that the rat can pass through.
// Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
// If no path exists, return an empty list.

// Note: Return the final result vector in lexicographically smallest order.

// Examples:

// Input: mat[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
// Output: ["DDRDRR", "DRDDRR"]
// Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
// Input: mat[][] = [[1, 0], [1, 0]]
// Output: []
// Explanation: No path exists as the destination cell is blocked.
// Input: mat = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
// Output: ["DDRR", "RRDD"]
// Explanation: The rat has two possible paths to reach the destination: 1. "DDRR" 2. "RRDD", These are returned in lexicographically sorted order.
// Constraints:
// 2 ≤ mat.size() ≤ 5
// 0 ≤ mat[i][j] ≤ 1

class Solution
{
public:
    bool isSafe(vector<vector<int>> &maze, vector<vector<bool>> &visited, int mazeSize, int srcx, int srcy)
    {
        if (srcx < 0 || srcy < 0 || srcx >= mazeSize || srcy >= mazeSize)
            return false;

        if (maze[srcx][srcy] == 0 || visited[srcx][srcy] == true)
        {
            return false;
        }
        return true;
    }

    void solve(vector<vector<int>> &maze, vector<vector<bool>> &visited, int mazeSize, vector<string> &ans,
               int srcx, int srcy, int destx, int desty, string output)
    {
        if (srcx == destx && srcy == desty)
        {
            ans.push_back(output);
            return;
        }

        int arrx[] = {+1, 0, 0, -1}; // D, L, R, U
        int arry[] = {0, -1, +1, 0};
        char move[] = {'D', 'L', 'R', 'U'};

        for (int i = 0; i < 4; i++)
        {
            int newx = srcx + arrx[i];
            int newy = srcy + arry[i];
            char movement = move[i];

            if (isSafe(maze, visited, mazeSize, newx, newy))
            {

                visited[newx][newy] = true;
                output.push_back(movement);

                solve(maze, visited, mazeSize, ans, newx, newy, destx, desty, output);

                visited[newx][newy] = false;
                output.pop_back();
            }
        }
    }

    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int mazeSize = maze.size();

        vector<string> ans;
        vector<vector<bool>> visited(mazeSize, vector<bool>(mazeSize, 0));
        int srcx = 0;
        int srcy = 0;

        visited[0][0] = true;

        int destx = mazeSize - 1;
        int desty = mazeSize - 1;

        string output = "";
        if (maze[0][0] == 0)
        {
            return ans;
        }
        solve(maze, visited, mazeSize, ans, srcx, srcy, destx, desty, output);
        return ans;
    }
};