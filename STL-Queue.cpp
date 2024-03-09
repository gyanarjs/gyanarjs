#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Elijah");
    q.push("Freya");
    q.push("Klaus");

    cout << "Size of queue is " << q.size() << endl;
    cout << "Front is " << q.front() << endl;
    q.pop();
    cout << "Front after pop is " << q.front() << endl;
}