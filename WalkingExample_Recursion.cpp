#include<iostream>
using namespace std;

void reachHome(int source, int destination)
{
    cout << "Source: " << source << " Destination: " << destination << endl;
    // Base case
    if(source == destination)
    {
        cout << "You have reached the Destination  👍🏻 " << endl;
        return ;
    }

    // ek step aage badh jao
    source++;

    reachHome(source, destination);
}
int main()
{
    int destination =  10;
    int source = 1;

    cout << endl;

    reachHome(source, destination);
}