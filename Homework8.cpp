#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int row = n;

    while (row > 0)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row - 1;
        
    }
    
    return 0;
}