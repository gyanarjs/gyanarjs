#include<iostream>
using namespace std;

int power ()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
        
    }
    return ans;
    
}

int main()
{
    /*int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    */
    
    int ans = power();
    cout << "Anwer is " << ans << endl;
    return 0;
}