#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "Hello" << endl;
            break;
        }
    default:
        break;
    }
    return 0;
}