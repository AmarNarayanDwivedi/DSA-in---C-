#include <iostream>
using namespace std;

int binarySearch(int arr[], int stratIndex, int endIndex, int target)
{
    int mid = endIndex + (stratIndex - endIndex) / 2;
    if (stratIndex > endIndex)
        return -1;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[mid] > target)
    {
        binarySearch(arr, stratIndex, mid - 1, target);
    }
    if (arr[mid] < target)
    {
        binarySearch(arr, mid + 1, endIndex, target);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int startIndex = 0;
    int endIndex = 6;
    int target = 7;
    int ans = binarySearch(arr, startIndex, endIndex, target);
    cout << "target at index: " << ans << endl;
    return 0;
}