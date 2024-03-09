#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Elijah");
    s.push("Freya");
    s.push("Klaus");

    cout << "Top Element -> " << s.top() << endl;

    s.pop();
    cout << "Top element -> " << s.top() << endl;
    cout << "😅" << endl;

    cout << "Size of stack " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;
}