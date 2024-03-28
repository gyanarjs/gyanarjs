#include<iostream>
using namespace std;

bool checkPalindrome(string str, int s, int e)
{
    // base case 
    if(s > e)
    return true;

    // 1 case solve karlo
    if(str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, s + 1, e - 1);
    }

}

int main()
{
    string name = "aba";

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if(isPalindrome)
    {
        cout << "It's Plaindrome " << endl;
    }
    else
    {
        cout << "It's not Palindrome " << endl;
    }

}