#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    for (int i = 0; i < n; i++)
    {
        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start ++;
            end --;

        }
        
    }
    
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}



int main()
{
    int arr[6] = {12, 34, 0, -45, 23, 14};
    int brr[5] = {15, 48, 90, 46, 25};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}