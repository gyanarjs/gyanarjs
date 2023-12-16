#include<iostream>
using namespace std;
int main()
{
    int c;
    cout << "Enter the value of celcius" << endl;
    cin >> c;

    float far = (c * 9/5) + 32;
    cout << "The value in fahrenheit is " << far << endl;

    return 0;
}