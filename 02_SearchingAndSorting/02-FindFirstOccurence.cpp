#include <iostream>
using namespace std;
#include <vector>

void findFirstOccurence(vector<int> &nums, int target, int &ans)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        if (nums[mid] < target)
        {
            s = mid + 1;
        }
    }
    cout << "Target at index" << ans << endl;
}

int main()
{
    vector<int> arr;
    arr = {22, 33, 33, 33, 33, 44, 55, 66, 77, 88, 99};
    int target = 33;
    int ans = -1;
    findFirstOccurence(arr, target, ans);
    return 0;
}