#include <iostream>
using namespace std;

// finding unique number
void uniqueNumberFind(int arr[], int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }
    cout << "Unique Number in This Array is " << result << endl;
}
int main()
{
    int arr[] = {1, 2, 34, 2, 3, 1, 3};
    int size = 7;

    uniqueNumberFind(arr, size);
    return 0;
}