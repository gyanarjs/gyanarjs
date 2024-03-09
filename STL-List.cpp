#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_front(2);
    l.push_back(1);

    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "After erasing " << endl;
    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;
}