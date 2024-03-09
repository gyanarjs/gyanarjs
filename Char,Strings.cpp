#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (toLowerCase(name[start]) != toLowerCase(name[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    int result = getLength(name);
    cout << "The length of the string is " << result << endl;

    reverse(name, result);
    cout << "Your name is " << name << endl;

    cout << "Palindrome or not " << checkPalindrome(name, result) << endl;
}