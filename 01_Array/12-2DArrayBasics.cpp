#include <iostream>
#include <algorithm>
using namespace std;

void printArrayRowwise(int arr[][3], int rowsize, int colsize)
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArrayColumWise(int arr[][3], int rowsize, int colsize)
{
    for (int i = 0; i < colsize; i++)
    {
        for (int j = 0; j < rowsize; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void printArrayDiagonal(int arr[][3], int rowsize, int colsize)
{
    if (rowsize == colsize)
    {
        for (int i = 0; i < colsize; i++)
        {
            for (int j = 0; j < rowsize; j++)
            {
                if (i == j)
                {
                    cout << arr[i][j] << " " << endl;
                }
            }
        }
    }
    else
    {
        cout << "Matrix is not in square shape";
    }
}

void inputFromUser(int arr[][3], int rowsize, int colsize)
{
    cout << "Enter 2D Array with 3 Col limit" << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "Enter element for position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void searchingIn2DArray(int arr[][3], int rowsize, int colsize, int target)
{
    bool ans;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Target found at index[" << i << "][" << j << "]" << endl;
                ans = true;
            }
        }
    }
    if (ans != true)
    {
        cout << "Target Not Found in given Array";
    }
}

void transpose(int arr[][3], int rowsize, int colsize)
{
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = i + 1; j < colsize; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    printArrayRowwise(arr, rowsize, colsize);
}

int main()
{

    // Creation
    int arr[3][3];

    // Decleration
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {5, 6, 7}};
    int rowsize = 3;
    int colsize = 3;

    // Access 2D arrray
    cout << brr[1][1] << endl;

    // Traverse 2D array

    // printArrayRowwise(brr, rowsize, colsize);

    // printArrayColumWise(brr, rowsize, colsize);

    // printArrayDiagonal(brr, rowsize, colsize);

    // taking Input From user
    // inputFromUser(arr, 3, 3);
    // printArrayRowwise(arr, 3, 3);

    // Searching in 2D Array
    // searchingIn2DArray(brr, rowsize, colsize, 4);

    // Transpose of a 2D matrix
    transpose(brr, rowsize, colsize);
    return 0;
}