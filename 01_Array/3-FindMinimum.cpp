#include <iostream>
#include <climits>
using namespace std;
void findMin(int arr[], int size)
{
    int temp = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    cout << "smallest number in this array is " << temp << endl;
}
int main()
{
    int arr[] = {2, 2, 6, 89, 2, 0, 21};
    int size = 7;
    findMin(arr, size);
    return 0;
}