#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    for(int i:last)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size -> " << v.capacity() << endl;

    cout << v.size() << endl;

    cout << "Before pop" << endl;

    for(int i:v)
    {
       cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop " << endl;

    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;


}