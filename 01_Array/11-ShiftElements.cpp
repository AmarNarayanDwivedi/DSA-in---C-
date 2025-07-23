#include <iostream>
using namespace std;

void shiftElement(int arr[], int size, int shift)
{
    int brr[100];
    int j = 0;
    for (int i = size - shift; i < size; i++)
    {
        brr[j] = arr[i];
        j++;
    }
    for (int i = size - shift - 1; i >= 0; i--)
    {
        arr[i + shift] = arr[i];
    }

    for (int i = 0; i < shift; i++)
    {
        arr[i] = brr[i];
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
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;
    shiftElement(arr, size, 3);
    printArray(arr, size);

    return 0;
}