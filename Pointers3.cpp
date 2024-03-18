#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};

    cout << "The address of first memory block: " << arr << endl;
    cout << "The address of first memory block: " << &arr[0] << endl;

    cout << "Value at 0th index: " << *arr << endl;
    cout << "Value at 0th index + 1: " << *arr + 1 << endl;
    cout << "Value at 1st index: " << *(arr + 1) << endl;
    cout << "Value at 2nd index: " << arr[2] << endl;
    cout << "Value at 2nd index: " << *(arr + 2) << endl;

    int i = 3;
    cout << "Value at 3rd index: " << i[arr] << endl;
    cout << "Value at 3rd index: " << *(i + arr) << endl;


    int temp[10] = {1, 2, 3, 4, 5, 6 ,7 , 8, 9, 10};
    cout << "size of array: " << sizeof(temp) << endl;
    cout << "Size of 1st block of temp array: " << sizeof(*temp) << endl;
    cout << "Size of address of 1st block of temp array: " << sizeof(&temp) << endl;


    int *ptr = &temp[0];
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of value of ptr : " << sizeof(*ptr) << endl;
    cout << "Size of address of ptr: " << sizeof(&ptr) << endl;


    int a[20] = {1, 2, 3, 5};
    cout << "--> " << &a[0] << endl;

    int *p = &a[0];
    cout << "--> " << &p << endl;


    int rrr[10];
    int *pt = &rrr[0];
    cout << pt << endl;
    pt = pt + 1;
    cout << pt << endl;

}