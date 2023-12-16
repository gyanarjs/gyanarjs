#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;

    char ops;
    cout << "Enter the Operation you want to perform" << endl;
    cin >> ops;

    switch (ops)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default:
        break;
    }
    return 0;
}