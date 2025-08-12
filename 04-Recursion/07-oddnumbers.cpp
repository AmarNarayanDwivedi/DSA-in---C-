#include <iostream>
using namespace std;

void oddNumbers(int arr[], int size, int index)
{
    if (index == size)
        return;

    if (arr[index] % 2 != 0)
        cout << arr[index] << " ";

    oddNumbers(arr, size, index + 1);
}

int main()
{
    int arr[] = {1, 2, 99, 4, 5, 6, 7};
    int index = 0;
    int size = 7;
    oddNumbers(arr, size, index);

    return 0;
}