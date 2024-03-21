#include<iostream>
using namespace std;


int score = 15;
void print(int& i)
{
    cout << "In print: " << score << endl;
    cout << i << endl;

}

void printAgain(int& b)
{
    cout << "In printAgain: " << score << endl;
    cout << b << endl;
}

int main()
{
    cout << "In main: " << score << endl;
    int i = 5;
    int b = 4;
    print(i);
    printAgain(b);



}