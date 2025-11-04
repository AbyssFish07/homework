#include<iostream>
#include<iomanip>
using namespace std;
bool isprime(int n);
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i)==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    return 0;
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
