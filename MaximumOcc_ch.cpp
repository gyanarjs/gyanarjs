#include<iostream>
using namespace std;

int getMaxOccChar(string str)
{
    int arr[26] = {0};

    //Creating an array of count of charcaters
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        //lowrcase
        int number = 0;
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    //find max occuring character
    int maxi = - 1, ans = 0;
    for(int i = 0; i < 26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string str;
    cout << "Enter the string: " << endl;
    cin >> str;

    char result = getMaxOccChar(str);
    cout << result << endl;
}