#include<iostream>
using namespace std;
//0 -> Odd
//1 -> Even

bool isEven (int a){
    if (a&1)
{
    return 0;
}
else
{
    return 1;
}
}



int main()
{
    int num;
    cout <<"Entre the number" << endl;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
    
    
    return 0;
}