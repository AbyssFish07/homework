#include<iostream>
using namespace std;
int main()
{
    int max=0;
    int a,b,r;
    cin>>a>>b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    cout<<b<<endl;
    return 0;
}
