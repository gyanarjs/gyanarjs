#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 'r';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // new char;
    // char *ptr = new char;
    // cout << sizeof(char) << endl;


     int n;
     cout << "Enter the size of the array: " << endl;
     cin >> n;

     // variable size array
     int *arr = new int[n];

     cout << "Enter the array elements: " << endl;
     for(int i = 0; i < n; i++)
     {
        cin >> arr[i];
     }

     int ans = getSum(arr, n);
     cout << "Sum is: " << ans << endl;


    

}