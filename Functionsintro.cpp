#include<iostream>
using namespace std;
int main()
{
    int a , b;

    cout <<"Entre the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    int answer = 1;

    for (int i = 0; i < b; i++)
    {
        answer = answer * a;
    }
    cout << "Answer is " << answer << endl;


    int c , d;

    cout <<"Entre the value of a" << endl;
    cin >> c;

    cout << "Enter the value of b" << endl;
    cin >> d;

    int ans = 1;

    for (int i = 0; i <= d; i++)
    {
        ans = ans * c;
    }
    cout << "Answer is " << ans << endl;
    return 0;
}