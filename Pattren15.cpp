#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char value = 'A' + n - row;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}