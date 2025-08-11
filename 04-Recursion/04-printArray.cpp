#include <iostream>
using namespace std;

void printArray(int arr[], int startIndex, int size)
{
    if (startIndex == size)
        return;
    cout << arr[startIndex] << " ";
    printArray(arr, startIndex + 1, size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int startIndex = 0;

    printArray(arr, startIndex, size);

    return 0;
}