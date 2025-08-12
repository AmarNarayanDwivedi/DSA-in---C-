#include <iostream>
#include <algorithm>

using namespace std;

int maxInArray(int arr[], int size, int index)
{
    if (index == size)
        return -1;

    return max(arr[index], maxInArray(arr, size, index + 1));
}

int main()
{
    int arr[] = {1, 2, 99, 4, 5, 6, 7};
    int index = 0;
    int size = 7;
    int ans = maxInArray(arr, size, index);
    cout << ans << endl;
    return 0;
}