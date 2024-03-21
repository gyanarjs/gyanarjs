#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base Case is mandatory
    if (n == 0)
        return 1;

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
    // or we can write --> n * smallerProblem
    
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
}