#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char x;
    cout << "Enter the character" << endl;
    cin >> x;

    if (isupper(x))
    {
        cout << "The character is upper case" << endl;

    }
    else if (islower(x))
    {
        cout << "The character is lower case" << endl;

    }

    else
    {
        cout << "The character is numeric" << endl;
    }
    
    
    

    
    return 0;
}
