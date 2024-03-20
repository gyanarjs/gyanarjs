#include<iostream>
using namespace std;

void printArray(int **arr, int row, int col)
{
    // Taking output
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int row;
    cout << "Enter row value: " << endl;
    cin >> row;

    int col;
    cout << "Enter col value: " << endl;
    cin >> col;

    // creating a 2D array
    int **arr = new int*[row];
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    cout << "Enter the values of the elements of the array: " << endl;
    // Taking input 
    for(int i =  0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    printArray(arr, row, col);

    // Memory release 
    for(int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

}