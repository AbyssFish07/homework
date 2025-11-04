#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,m,n;
    cin>>m>>n;
    for(int i=m+1;i<n;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%100%10;
        if(i==pow(a,3)+pow(b,3)+pow(c,3))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}