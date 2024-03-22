#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n+1, true);
     
    prime[0] = prime[1] = false;

    for(int i = 0; i < n; i++)
    {
        if(prime[i])
        count++;

        for(int j = 0; j < n; j++)
        {
            prime[j] = 0;
        }
    }
    return count;

}

int main()
{
    int n;
    cin >> n;
}
