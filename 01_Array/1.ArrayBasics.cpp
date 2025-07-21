#include <iostream>
using namespace std;
int main()
{
    // create an Array
    int arr1[100];

    // Intitalizaton
    int arr2[5] = {1, 2, 3, 4, 5};

    // Access Array
    cout << arr2[2] << endl;

    // update Array Element
    arr2[2] = 9;
    cout << arr2[2] << endl;

    // size of
    cout << sizeof(arr1) << endl;
    cout << sizeof(arr2[2]) << endl;

    // Address of first element
    cout << "Address of arr[2]" << &arr2[2] << endl;

    return 0;
}