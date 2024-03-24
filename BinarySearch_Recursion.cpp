#include<iostream>
using namespace std;


void print(int *arr, int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int size, int start, int end, int key)
{
    print(arr, start, end);

    // base case
    // element not found
    if(start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    cout << "Value of arr mid is: " << arr[mid] << endl;
    
    // element found
    if(arr[mid] == key)
    {
        return true;
    }


    if(arr[mid] < key)
    {
        return binarySearch(arr, size, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, size, start, mid - 1, key);
    }

}
int main()
{
    int arr[10] = {1, 3, 6, 10, 19, 28, 54, 34, 23, 12};
    int size = 6;
    int key = 12;
    int start = 0;
    int end = size - 1;

    bool ans = binarySearch(arr, size, start, end, key);

    if(ans)
    {
        cout << "Element is present " << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }

}