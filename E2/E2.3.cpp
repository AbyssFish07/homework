#include<iostream>
#include <stdbool.h>
using namespace std; 
bool isprime(int n);
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<n/2+1;i++)
    {
       if(isprime(i)+isprime(n-i)==2)
       {
        cout<<n<<"="<<i<<"+"<<n-i<<endl;
        return 0;
       }
    }
    return 1;
}
bool isprime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}