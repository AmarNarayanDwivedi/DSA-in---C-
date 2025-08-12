#include <iostream>
using namespace std;

bool isArraySort(int arr[], int size, int index)
{

    if (index == size - 1) // last index
        return true;

    if (arr[index] > arr[index + 1])
        return false;

    isArraySort(arr, size, index + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int index = 0;
    int size = 7;
    bool ans = isArraySort(arr, size, index);
    cout << ans << endl;
    return 0;
}