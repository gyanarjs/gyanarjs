#include<iostream>
using namespace std;
int main()
{
    int n;
    
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 0 && c >= 0; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << endl;
    }
    cout << endl;
    
    return 0;
}