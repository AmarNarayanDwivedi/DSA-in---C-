#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr)
{
    int e = arr.size();
    int s = 0;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid > 0 && mid < arr.size() - 1 && arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        if (arr[mid] > arr[mid - 1])
        {
            s = mid + 1;
        }
        if (arr[mid] < arr[mid - 1])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 100, 50, 40, 30};
    int size = arr.size();

    int ans = findPeak(arr);
    cout << ans;

    return 0;
}