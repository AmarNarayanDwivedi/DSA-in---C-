// Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

//                                                                                                                                                        Example 1 :
// Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].
// Example 2:

// Input: nums = [1,2,3,5]
// Output: false
// Explanation: The array cannot be partitioned into equal sum subsets.
//     Input : nums = [ 1, 5, 11, 5 ] Output : true Explanation : The array can be partitioned as[1, 5, 5] and[11].Example 2 :

//     Input : nums = [ 1, 2, 3, 5 ] Output : false Explanation : The array cannot be partitioned into equal sum subsets.

class Solution
{
public:
    bool solve(vector<int> &nums, int target, int i)
    {
        if (target == 0)
        {
            return true;
        }
        if (target < 0 || i >= nums.size())
        {
            return false;
        }
        bool ans;

        bool inc = solve(nums, target - nums[i], i + 1);
        bool exc = solve(nums, target, i + 1);
        ans = inc || exc;

        return ans;
    }

    bool canPartition(vector<int> &nums)
    {
        int i = 0;
        int target = 0;

        for (int i = 0; i < nums.size(); i++)
            target += nums[i];
        if (target % 2 != 0)
            return false;

        target = target / 2;

        return solve(nums, target, i);
    }
};