#include<iostream>
using namespace std;

void reverse(string& str, int s, int e)   // we have to use reference variable string& str then it will work
{
    cout << "call received for " << str << endl; 
    //base case
    if(s > e)
    return ;

    // 1 case solved
    swap(str[s], str[e]);
    s++;
    e--;
    
    //recursive call
    reverse(str, s, e);
}

int main()
{
    string name = "gyana";

    reverse(name, 0, name.length() - 1);

    cout << endl;

    cout << name << endl;

}