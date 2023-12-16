#include <iostream>
using namespace std;

// 1-> Prime no.
// 0 -> Not a Prime no.

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // divide hogaya, not a prime number
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int n;
    cout << "Entre the number" << endl;
    cin >> n;
    if (isPrime(n))
    {
        cout << "is a Prime no." << endl;
    }
    else
    {
        cout << "not a Prime number" << endl;
    }

    return 0;
}