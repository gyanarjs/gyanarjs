#include<iostream>
using namespace std;

int fib(int n)
{
    // Base Case

    if(n == 0)
    return 0;

    if(n == 1)
    return 1;
    

    int ans = fib(n - 1) + fib(n - 2);

    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int result = fib(n);
    cout << "Ans is: " << result << endl;


}