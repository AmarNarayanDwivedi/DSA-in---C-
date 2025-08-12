#include <iostream>
using namespace std;

bool searchInArray(int arr[], int index, int size, int target)
{
    if (index == size)
    {
        return false;
    }
    if (arr[index] == target)
        return true;
    searchInArray(arr, index + 1, size, target);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int index = 0;
    int size = 7;
    int target = 1;

    bool ans = searchInArray(arr, index, size, target);
    cout << ans << endl;
    return 0;
}