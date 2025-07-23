#include <iostream>
using namespace std;

void twoSum(int arr[], int size, int target)
{
    bool result;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int temp = arr[i] + arr[j];
            if (temp == target)
            {
                cout << "Found Pair " << arr[i] << "," << arr[j] << endl;
                result = true;
            }
        }
    }
    if (!result)
    {
        cout << "No Triplet Found" << endl;
    }
}

int main()
{
    int arr[] = {22, 2, 44, 5, 56, 7, 8, 99, 33, 2, 4};
    int size = 11;
    twoSum(arr, size, 100);
    return 0;
}