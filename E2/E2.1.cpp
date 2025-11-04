#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double e=0;
    double jiecheng=1;
    for(int i=1;i<=n;i++)
    {
        jiecheng *= i;
        e+=1/jiecheng;
    }
    e++;
    cout<<fixed<<setprecision(10)<<e<<endl;
}