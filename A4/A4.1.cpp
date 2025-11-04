#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x,n;
    cin>>x>>n;
    double sum = 0;
    double jiecheng = 1;
    for(int i=1;i<=n;i++)
    {
        jiecheng*= i;
        sum+= pow(x,i)/jiecheng;
    }
    sum++;
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}
