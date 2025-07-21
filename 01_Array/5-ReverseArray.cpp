#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int j = size - 1;
    for (int i = 0; i < size / 2; i++)
    {

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 2, 6, 89, 2, 0, 21};
    int size = 7;

    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}