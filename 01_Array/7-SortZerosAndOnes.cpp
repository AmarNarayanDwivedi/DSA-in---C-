#include <iostream>
using namespace std;

void sortZerosAndOnes(int arr[], int size)
{
    int countZeros = 0;
    int countOnes = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZeros++;
        }
        if (arr[i] == 1)
        {
            countOnes++;
        }
    }

    for (int i = 0; i < countZeros; i++)
    {
        arr[i] = 0;
    }
    for (int i = countZeros; i < size; i++)
    {
        arr[i] = 1;
    }
}

void sortZerosOnceAndTwos(int arr[], int size)
{
    int countZeros = 0;
    int countOnes = 0;
    int CountTwos = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZeros++;
        }
        if (arr[i] == 1)
        {
            countOnes++;
        }
        if (arr[i] == 2)
        {
            CountTwos++;
        }
    }

    for (int i = 0; i < countZeros; i++)
    {
        arr[i] = 0;
    }
    for (int i = countZeros; i < size - CountTwos; i++)
    {
        arr[i] = 1;
    }
    for (int i = size - CountTwos; i < size; i++)
    {
        arr[i] = 2;
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
    int arr[] = {1, 0, 1, 0, 1, 2, 0, 0, 1, 0, 2};
    int size = 11;
    // sortZerosAndOnes(arr, size);
    // printArray(arr, size);
    sortZerosOnceAndTwos(arr, size);
    printArray(arr, size);

    return 0;
}