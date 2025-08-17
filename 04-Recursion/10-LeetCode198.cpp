// You are given an m x n integer matrix mat and an integer target.

//     Choose one integer from each row in the matrix such that the absolute difference between target and the sum of the chosen elements is minimized.

//     Return the minimum absolute difference.

//     The absolute difference between two numbers a and b is the absolute value of a -
//     b.

class Solution
{
public:
    int solve(vector<vector<int>> &mat, int target, int sum, int row)
    {
        if (row == mat.size())
            return abs(target - sum);
        int ans = INT_MAX;

        for (int col = 0; col < mat[0].size(); col++)
        {
            int reAns = solve(mat, target, sum + mat[row][col], row + 1);

            ans = min(reAns, ans);
        }

        return ans;
    }

    int minimizeTheDifference(vector<vector<int>> &mat, int target)
    {
        int sum = 0;
        int row = 0;
        int ans = solve(mat, target, sum, row);
        return ans;
    }
};