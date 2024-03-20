#include<iostream>
using namespace std;

// int& func(int n)
// {                   // Bad Practice // and all variables are local and will die outside the function
//     int num = 5;
//     int &ans = num;
//     return ans;
// }  

void update2(int &n)
{
    n++;
}
void update1(int n)
{
    n++;
}

int main()
{
    // int i = 5;

    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;

    cout << "Before: " << n << endl;
    update2(n);
    cout << "After: " << n << endl;

}