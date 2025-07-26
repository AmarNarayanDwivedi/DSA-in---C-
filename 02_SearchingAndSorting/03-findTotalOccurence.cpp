#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int target, int &ans)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(vector<int> arr, int target, int &ans)
{
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int totalOccurence(vector<int> &arr, int target)
{
    int firstOcc = -1;
    firstOccurence(arr, target, firstOcc);

    int lastOcc = -1;
    lastOccurence(arr, target, lastOcc);

    int totalOcc = lastOcc - firstOcc + 1;
    return totalOcc;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8};
    int target = 3;
    int firstOcc = -1;

    int totalOcc = totalOccurence(arr, target);
    cout << "total Occurence: " << totalOcc << endl;
    return 0;
}