#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Size of the array is: " << size << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
bool linearSearch(int *arr, int size, int key)
{
    printArray(arr, size);
    if(size == 0)
    {
        return false;
    }
    
    if(arr[0] == key)
    {
        return true;
    }

    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[6] = {1, 3, 6, 10, 19, 28};
    int size = 6;
    int key = 6;

    bool ans = linearSearch(arr, size, key);

    if(ans)
    {
        cout << "The key is present in the array " << endl;
    }
    else
    {
        cout << "The array is not prsent in the array " << endl;
    }
}