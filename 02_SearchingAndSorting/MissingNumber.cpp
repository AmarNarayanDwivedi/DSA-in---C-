// Given an array nums containing n distinct numbers in the range[0, n], return the only number in the range that is missing from the array.

//    Example 1 :

//     Input : nums = [ 3, 0, 1 ]

//    Output : 2

//   Explanation :

//     n = 3 since there are 3 numbers,
//             so all numbers are in the range[0, 3].2 is the missing number in the range since it does not appear in nums.

//             Example 2 :

//     Input : nums = [ 0, 1 ]

//             Output : 2

//             Explanation :

//     n = 2 since there are 2 numbers,
//             so all numbers are in the range[0, 2].2 is the missing number in the range since it does not appear in nums.

//             Example 3 :

//     Input : nums = [ 9, 6, 4, 2, 3, 5, 7, 0, 1 ]

//             Output : 8

//             Explanation :

//     n = 9 since there are 9 numbers,
//             so all numbers are in the range[0, 9].8 is the missing number in the range since it does not appear in nums.
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int s = 0;
        int e = (nums.size() - 1);
        int mid = s + (e - s) / 2;
        int ans = nums.size();
        while (s <= e)
        {
            if (nums[mid] == mid)
            {
                s = mid + 1;
            }
            if (nums[mid] != mid)
            {
                ans = mid;
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};