#include <iostream>
using namespace std;

void printRowSum(int arr[][4], int row, int col)
{
    cout << "Printing the Sum in Row wise-> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void printColSum(int arr[][4], int row, int col)
{
    cout << "Printing the Sum in Col wise-> " << endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][4];

    cout << "Enter the elements: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printRowSum(arr, 3, 4);
    printColSum(arr, 3, 4);

    int ansIndex = largestRowSum(arr, 3, 4);
    cout << "Max row at Index -> " << ansIndex << endl;
}