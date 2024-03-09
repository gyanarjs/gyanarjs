#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_front();

    // for(int i:d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Front -> " << d.front() << endl;
    cout << "Back -> " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;
    cout << "Size before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size after erase " << d.size() << endl;
}