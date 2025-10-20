#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,p,s;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=pow(p*(p-a)*(p-b)*(p-c),0.5);
    cout<<s<<endl;
}
