#include <iostream>
using namespace std;

// fun
void linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target Found in index: " << i << endl;
        }
        }
    cout << "Target not found in selected array";
}

int main()
{
    int arr[] = {1, 2, 6, 89, 2, 45, 21};
    int size = 7;
    int target1 = 6;
    int target2 = 99;
    linearSearch(arr, size, target1);
    linearSearch(arr, size, target2);

    return 0;
}