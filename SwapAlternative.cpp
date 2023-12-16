#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternative(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {2, 4, 5, 3, 7, 6, 8, 9};
    int odd[5] = {23, 12, 45, 67, 87};

    swapAlternative(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternative(odd, 5);
    printArray(odd, 5);

    return 0;
}