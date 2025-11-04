#include<iostream>
using namespace std;

int isPrime(int n);

int main()
{
    int m;
    cin >> m;
    if(isPrime(m)==1)
    {
        cout << m << " is a prime number" <<endl;
    }
    else
    {
        cout << m << " is not a prime number" <<endl;
    }
    return 0;
}
int isPrime(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
