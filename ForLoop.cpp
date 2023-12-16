#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Printing count form 1 to n" << endl;

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }

        i++;
    }

    return 0;
}

// Or this can be the code

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     cout <<"Printing count from 1 to n" << endl;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }
