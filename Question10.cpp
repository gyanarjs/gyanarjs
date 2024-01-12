#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sumeven = 0;
    int sumodd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumeven += arr[i];
        } else {
            sumodd += arr[i];
        }
    }

    cout << "Sum of even numbers: " << sumeven << endl;
    cout << "Sum of odd numbers: " << sumodd << endl;

    return 0;
}
