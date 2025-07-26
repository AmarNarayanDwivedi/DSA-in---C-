void inputFromUser(int arr[][3], int rowsize, int colsize)
{
    cout << "Enter 2D Array with 3 Col limit" << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "Enter Element for position" << i << "," << j;
            cin >> arr[i][j];
        }
    }
}
