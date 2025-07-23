#include <iostream>
using namespace std;

void FlipZerosToOnce(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] ^ 1;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1, 0};
    int size = 9;
    FlipZerosToOnce(arr, size);
    printArray(arr, size);
    return 0;
}