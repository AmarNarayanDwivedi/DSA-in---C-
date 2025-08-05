#include <iostream>
#include <vector>
using namespace std;

int countArrayLength(char arr[])
{
    int index = 0;
    int count = 0;
    while (arr[index] != '\0') // FIXED here
    {
        count++;
        index++;
    }
    return count;
}

// Replace Cahracter
// upper Case to Lower Case
void upperCaseToLowerCase(char arr[])
{
    int index = 0;
    int count = 0;
    while (arr[index] != '\0')
    {
        if (arr[count] >= 'A' && arr[count] <= 'Z')
        {
            arr[count] = arr[count] + ('a' - 'A');
        }
        cout << arr[count];
        count++;
        index++;
    }
    cout << endl;
}
// Lower Case to Upper Case
void lowerCaseToUpperCase(char arr[])
{
    int index = 0;
    int count = 0;
    while (arr[index] != '\0')
    {
        if (arr[count] >= 'a' && arr[count] <= 'z')
        {
            arr[count] = arr[count] + ('A' - 'a');
        }
        cout << arr[count];
        count++;
        index++;
    }
    cout << endl;
}

// Char Array Reverse
void ReverseArray(char arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// Palindrome
bool checkPalindrom(char arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        if (arr[s] = arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

// String STL

int main()
{
    // declaration
    char arr[100];

    // user input
    // cout << "Enter String to insert in Array: " << endl;
    // cin >> arr;
    // cout << arr;

    // user input with white  spaces
    cout << "Enter String to insert in Array: ";
    // cin.getline(arr, 20);
    cin.getline(arr, 20, '\t'); // will not read after tab button
    // cout << arr << endl;

    // find  length of char Array
    int length = countArrayLength(arr);
    cout << " Array length " << length << endl;

    // Replace Cahracter
    // upper Case to Lower Case
    upperCaseToLowerCase(arr);

    // Lower Case to Upper Case
    lowerCaseToUpperCase(arr);

    // Char Array Reverse
    ReverseArray(arr, length);
    cout << " Reverse Array " << arr << endl;

    // Palindrome
    bool ans = checkPalindrom(arr, length);
    cout << " Is given String is Palindrome: " << ans << endl;

    // String STL

    return 0;
}